#include <stdio.h>
#include <string.h>

/* DEFINICIJA FUNKCIJE */
int podaciZaKatProizv(
    const char *imeDat,
    const char *nazKat,
    int *brojProizv,
    float *najNizaC,
    float *najVisaC
) {
    FILE *fp = fopen(imeDat, "r");
    if (fp == NULL) {
        return 0;   /* datoteka se ne može otvoriti */
    }

    int sifra;
    char kat[20 + 1];
    char naziv[50 + 1];
    float cijena;

    *brojProizv = 0;

    while (fscanf(fp, "%d#%20[^#]#%50[^#]#%f",
                  &sifra, kat, naziv, &cijena) == 4) {

        if (strcmp(kat, nazKat) == 0) {

            if (*brojProizv == 0) {
                *najNizaC = cijena;
                *najVisaC = cijena;
            } else {
                if (cijena < *najNizaC)
                    *najNizaC = cijena;
                if (cijena > *najVisaC)
                    *najVisaC = cijena;
            }

            (*brojProizv)++;
        }
    }

    fclose(fp);
    return 1;   /* datoteka postoji */
}
/* KRAJ DEFINICIJE */

int main(void){
    char imeDat[128 + 1];
    char nazKat[20 + 1];

    printf("Naziv datoteke: ");
    scanf("%s%*c", imeDat);

    printf("Kategorija proizvoda: ");
    scanf("%[^\n]", nazKat);

    int brojProizv = 0;
    float najNizaC = 0.0f;
    float najVisaC = 0.0f;

    int postoji = podaciZaKatProizv(
        imeDat,
        nazKat,
        &brojProizv,
        &najNizaC,
        &najVisaC
    );

    if (!postoji) {
        printf("Ne postoji datoteka.");
    }
    else if (brojProizv == 0) {
        printf("Nema proizvoda u navedenoj kategoriji.");
    }
    else {
        printf(
            "Broj proizvoda, najniza i najvisa cijena: %d %.2f %.2f",
            brojProizv,
            najNizaC,
            najVisaC
        );
    }

    return 0;
}
