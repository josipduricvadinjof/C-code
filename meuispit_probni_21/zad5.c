#include <stdio.h>
#define MAX 51

int main(void) {
    char niz[MAX];
    printf("Niz > ");
    fgets(niz, MAX, stdin);

    int broj_rijeci = 0;
    int najdulja = 0;
    int duljina = 0;
    int pocetak_najdulje = 0;
    int pocetak_trenutne = 0;

    for (int i = 0; niz[i] != '\0'; i++) {

        if (niz[i] == ' ' || niz[i] == '.') {
            // kraj jedne riječi
            if (duljina > 0) {
                broj_rijeci++;
                if (duljina > najdulja) {
                    najdulja = duljina;
                    pocetak_najdulje = pocetak_trenutne;
                }
                duljina = 0;
            }
        } else {
            // slovo u riječi
            if (duljina == 0)
                pocetak_trenutne = i; // početak nove riječi
            duljina++;
        }
    }

    printf("Broj rijeci: %d\n", broj_rijeci);

    printf("Najdulja rijec: ");
    for (int i = pocetak_najdulje; i < pocetak_najdulje + najdulja; i++)
        printf("%c", niz[i]);
    printf("\n");

    return 0;
}
