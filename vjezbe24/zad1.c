#include <stdio.h>

struct predmet {
    int sifra;
    char naziv[50];
    int brojPolozili;
};

int main(void) {
    FILE *txt = NULL;
    FILE *bin = NULL;

    int sifraTxt, brojTxt;
    struct predmet p;

    /* otvaranje datoteka */
    txt = fopen("ukupno.txt", "r");
    if (txt == NULL) {
        printf("Greska pri otvaranju datoteke ukupno.txt\n");
        return 1;
    }

    bin = fopen("predmeti2.bin", "r+b");  // citanje + pisanje
    if (bin == NULL) {
        printf("Greska pri otvaranju datoteke predmeti2.bin\n");
        fclose(txt);
        return 1;
    }

    /* slijedno citanje tekstne datoteke */
    while (fscanf(txt, "%d %d", &sifraTxt, &brojTxt) == 2) {

        /* direktni pristup odgovarajucem zapisu u binarnoj datoteci */
        fseek(bin, (long)(sifraTxt - 1) * sizeof(struct predmet), SEEK_SET);

        /* procitaj zapis */
        if (fread(&p, sizeof(struct predmet), 1, bin) == 1) {

            /* azuriraj samo broj polozenih */
            p.brojPolozili = brojTxt;

            /* vrati indikator pozicije na pocetak zapisa */
            fseek(bin, -1L * sizeof(struct predmet), SEEK_CUR);

            /* zapisi natrag cijeli zapis */
            fwrite(&p, sizeof(struct predmet), 1, bin);
        }
    }

    /* zatvaranje datoteka */
    fclose(txt);
    fclose(bin);

    return 0;
}
