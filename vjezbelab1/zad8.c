#include <stdio.h>

int main(void) {
    int n;

    printf("Unesite broj > ");
    scanf("%d", &n);

    // Provjera je li broj neparan
    if (n % 2 == 0) {
        printf("Neispravan unos!");
        return 0;  // prekid programa
    }

    int i, j;
    int sredina = n / 2;  // indeks sredine

    // Gornji dio dijamanta (uključujući sredinu)
    for (i = 0; i <= sredina; i++) {
        // Ispiši razmake
        for (j = 0; j < sredina - i; j++) {
            printf(" ");
        }
        // Ispiši zvjezdice
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Donji dio dijamanta
    for (i = sredina - 1; i >= 0; i--) {
        // Ispiši razmake
        for (j = 0; j < sredina - i; j++) {
            printf(" ");
        }
        // Ispiši zvjezdice
        for (j = 0; j < 2 * i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
