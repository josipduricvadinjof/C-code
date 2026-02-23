#include <stdio.h>

typedef struct  {
   int sifDrzava;              // Šifra države (1–32)
   char nazivDrzava[20 + 1];   // Naziv države (maks. 20 znakova)
   int ukGolPostigao;          // Ukupan broj postignutih golova, inicijalno 0
   int ukGolPrimio;            // Ukupan broj primljenih golova, inicijalno 0
} zapis_t;

#include <stdio.h>



int main(void)
{
    FILE *ft = fopen("matches.txt", "r");
    FILE *fb = fopen("state.bin", "wb");

    if (ft == NULL || fb == NULL)
        return 1;

    char datum[11];
    int sifprva, sifdruga, brgolova1, brgolova2;

    zapis_t drzave[32];

    /* INICIJALIZACIJA – SAMO JEDNOM */
    for (int i = 0; i < 32; i++) {
        drzave[i].sifDrzava = i + 1;
        drzave[i].ukGolPostigao = 0;
        drzave[i].ukGolPrimio = 0;
    }

    /* ČITANJE SVIH UTAKMICA */
    while (fscanf(ft, "%10[^#]#%d#%d#%d#%d",
                  datum, &sifprva, &sifdruga,
                  &brgolova1, &brgolova2) == 5)
    {
        /* prva država */
        drzave[sifprva - 1].ukGolPostigao += brgolova1;
        drzave[sifprva - 1].ukGolPrimio   += brgolova2;

        /* druga država */
        drzave[sifdruga - 1].ukGolPostigao += brgolova2;
        drzave[sifdruga - 1].ukGolPrimio   += brgolova1;
    }

    /* UPIS U BINARNU DATOTEKU */
    for (int i = 0; i < 32; i++)
        fwrite(&drzave[i], sizeof(zapis_t), 1, fb);

    fclose(ft);
    fclose(fb);
    return 0;
}
