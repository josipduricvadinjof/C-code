#include <stdio.h>

typedef struct {
    int sifKandidat;
    char imeIPrezime[25 + 1];
    int ukGlasova;
} zapis_t;

int main(void)
{
    char txtIme[100], binIme[100];
    FILE *ft, *fb;

    int brojGlasova[9] = {0};   // indeksi 1–8
    int ukupnoGlasova = 0;

    char vrijeme[9];
    int sifMjesta;
    char nazivMjesta[100];
    int sifKandidat;

    zapis_t zapis;

    /* Ucitavanje imena datoteka */
    printf("Tekstna datoteka: ");
    scanf("%s", txtIme);

    printf("Binarna datoteka: ");
    scanf("%s", binIme);

    /* Otvaranje tekstne datoteke */
    ft = fopen(txtIme, "r");
    if (ft == NULL) {
        printf("Greska pri otvaranju tekstne datoteke!\n");
        return 1;
    }

    /* Citanje tekstne datoteke */
    while (fscanf(ft, "%8[^#]#%d#%99[^#]#%d",
                  vrijeme, &sifMjesta, nazivMjesta, &sifKandidat) == 4)
    {
        if (sifKandidat >= 1 && sifKandidat <= 8) {
            brojGlasova[sifKandidat]++;
            ukupnoGlasova++;
        }
    }
    fclose(ft);

    /* Otvaranje binarne datoteke */
    fb = fopen(binIme, "r+b");
    if (fb == NULL) {
        printf("Greska pri otvaranju binarne datoteke!\n");
        return 1;
    }

    /* Ažuriranje zapisa */
    for (int i = 0; i < 8; i++) {
        fread(&zapis, sizeof(zapis), 1, fb);
        zapis.ukGlasova += brojGlasova[zapis.sifKandidat];
        fseek(fb, -sizeof(zapis), SEEK_CUR);
        fwrite(&zapis, sizeof(zapis), 1, fb);
    }

    /* Ispis binarne datoteke */
    rewind(fb);
    printf("\nREZULTATI:\n");

    while (fread(&zapis, sizeof(zapis), 1, fb) == 1) {
        double postotak = 0.0;
        if (ukupnoGlasova > 0)
            postotak = (double)zapis.ukGlasova / ukupnoGlasova * 100.0;

        printf("%d %-25s %5d glasova (%.2f%%)\n",
               zapis.sifKandidat,
               zapis.imeIPrezime,
               zapis.ukGlasova,
               postotak);
    }

    fclose(fb);
    return 0;
}
