#include <stdio.h>

typedef struct {
    int sifDrzava;
    char nazivDrzava[21];
    int ukGolPostigao;
    int ukGolPrimio;
} zapis_t;

int main(void)
{
    char txtIme[128], binIme[128];
    FILE *ft, *fb;

    printf("Naziv tekstne datoteke > ");
    scanf("%s", txtIme);

    printf("Naziv binarne datoteke > ");
    scanf("%s", binIme);

    ft = fopen(txtIme, "r");
    fb = fopen(binIme, "r+b");

    char datum[11];
    int sif1, sif2, gol1, gol2;
    zapis_t zapis;

    /* ČITANJE TEKSTNE DATOTEKE */
    while (fscanf(ft, "%10[^#]#%d#%d#%d#%d",
                  datum, &sif1, &sif2, &gol1, &gol2) == 5)
    {
        /* PRVA DRŽAVA */
        fseek(fb, (sif1 - 1) * sizeof(zapis_t), SEEK_SET);
        fread(&zapis, sizeof(zapis_t), 1, fb);
        zapis.ukGolPostigao += gol1;
        zapis.ukGolPrimio   += gol2;
        fseek(fb, -sizeof(zapis_t), SEEK_CUR);
        fwrite(&zapis, sizeof(zapis_t), 1, fb);

        /* DRUGA DRŽAVA */
        fseek(fb, (sif2 - 1) * sizeof(zapis_t), SEEK_SET);
        fread(&zapis, sizeof(zapis_t), 1, fb);
        zapis.ukGolPostigao += gol2;
        zapis.ukGolPrimio   += gol1;
        fseek(fb, -sizeof(zapis_t), SEEK_CUR);
        fwrite(&zapis, sizeof(zapis_t), 1, fb);
    }

    fclose(ft);

    /* ISPIS STATISTIKE */
    rewind(fb);
    printf("Statistika za drzave:\n");

    for (int i = 0; i < 32; i++) {
        fread(&zapis, sizeof(zapis_t), 1, fb);

        if (zapis.ukGolPostigao > 0 || zapis.ukGolPrimio > 0) {
            printf("%2d %-20s %4d %4d\n",
                   zapis.sifDrzava,
                   zapis.nazivDrzava,
                   zapis.ukGolPostigao,
                   zapis.ukGolPrimio);
        }
    }

    fclose(fb);
    return 0;
}
