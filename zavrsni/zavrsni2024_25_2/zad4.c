#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Strukture su već zadane u zadatku */
typedef struct {
    char datum[12];        // DD.MM.GGGG.
    char imeKruzera[31];
    char luka[31];
    int brojGostiju;
} uplovljavanje_t;

typedef struct {
    char nazivLuke[31];
    int maksBrGostiju;
} lukaLimit_t;

int main(void) {
    char txtDat[129], binDat[129];
    char trazeniDatum[12];
    char trazenaLuka[31];

    FILE *ftxt = NULL;
    FILE *fbin = NULL;

    int maksKapacitet = -1;
    int ukupnoGostiju = 0;
    int pronadenaLuka = 0;

    /* Unos podataka */
    printf("Naziv tekstne datoteke> ");
    scanf("%128s", txtDat);

    printf("Naziv binarne datoteke> ");
    scanf("%128s", binDat);

    printf("Datum (DD.MM.GGGG.)> ");
    scanf("%11s", trazeniDatum);

    printf("Luka> ");
    scanf("%30s", trazenaLuka);

    /* Otvaranje tekstne datoteke */
    ftxt = fopen(txtDat, "r");
    if (!ftxt) {
        printf("Ne mogu otvoriti tekstnu datoteku.\n");
        return 1;
    }

    /* Traženje luke i njenog limita */
    lukaLimit_t luka;
    while (fscanf(ftxt, "%30s %d", luka.nazivLuke, &luka.maksBrGostiju) == 2) {
        if (strcmp(luka.nazivLuke, trazenaLuka) == 0) {
            maksKapacitet = luka.maksBrGostiju;
            pronadenaLuka = 1;
            break;
        }
    }
    fclose(ftxt);

    if (!pronadenaLuka) {
        printf("\nLuka '%s' nije u evidenciji.\n", trazenaLuka);
        return 0;
    }

    /* Otvaranje binarne datoteke */
    fbin = fopen(binDat, "rb");
    if (!fbin) {
        printf("Ne mogu otvoriti binarnu datoteku.\n");
        return 1;
    }

    printf("\n");

    /* Čitanje binarne datoteke */
    uplovljavanje_t zapis;
    while (fread(&zapis, sizeof(uplovljavanje_t), 1, fbin) == 1) {
        if (strcmp(zapis.datum, trazeniDatum) == 0 &&
            strcmp(zapis.luka, trazenaLuka) == 0) {

            printf("  Kruzer: %s, Broj gostiju: %d\n",
                   zapis.imeKruzera, zapis.brojGostiju);

            ukupnoGostiju += zapis.brojGostiju;
        }
    }
    fclose(fbin);

    /* Ispis rezultata */
    printf("Ukupno gostiju: %d\n", ukupnoGostiju);

    if (ukupnoGostiju > maksKapacitet) {
        printf("Kvota premasena (maksimalno %d)!\n", maksKapacitet);
    } else {
        printf("Kvota nije premasena (maksimalno %d).\n", maksKapacitet);
    }

    return 0;
}
