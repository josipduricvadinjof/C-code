#include <stdio.h>

struct predmet {
    int sifra;
    char naziv[50];
};

int main(void) {

    FILE *ft = fopen("ocjene.txt", "r");
    FILE *fb = fopen("predmeti1.bin", "rb");

    if (ft == NULL || fb == NULL) {
        printf("Greska pri otvaranju datoteka\n");
        return 1;
    }

    int trazenaSifra;
    printf("Upisite sifru > ");
    scanf("%d", &trazenaSifra);

    int sifStud, sifPred, ocjena;
    char ime[21], prezime[21];

    int pronaden = 0;

    /* slijedno citanje tekstne datoteke */
    while (fscanf(ft, "%d %20s %20s %d %d",
                  &sifStud, ime, prezime, &sifPred, &ocjena) == 5) {

        if (sifStud == trazenaSifra) {

            if (!pronaden) {
                printf("%s %s je polozio/polozila:\n", ime, prezime);
                pronaden = 1;
            }

            struct predmet p;

            /* direktni pristup binarnoj datoteci */
            fseek(fb, (long)(sifPred - 1) * sizeof(struct predmet), SEEK_SET);

            if (fread(&p, sizeof(struct predmet), 1, fb) == 1 &&
                p.sifra == sifPred) {
                printf("%s (%d)\n", p.naziv, ocjena);
            } else {
                printf("? (%d)\n", ocjena);
            }
        }
    }

    if (!pronaden) {
        printf("Nema polozenih predmeta\n");
    }

    fclose(ft);
    fclose(fb);

    return 0;
}
