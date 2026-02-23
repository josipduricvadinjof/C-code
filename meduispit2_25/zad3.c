#include <stdio.h>
#define MAX_NIZ 101

int main(void) {
    char niz[MAX_NIZ];
    char novi[MAX_NIZ];
    int k = 0; // indeks za novi niz

    fgets(niz, sizeof(niz), stdin);

    for (int i = 0; niz[i] != '\0' && niz[i] != '\n'; i++) {
        int brojac = 1;

        while (niz[i] == niz[i + 1]) {
            brojac++;
            i++;
        }

        // upiši znak u novi niz
        novi[k++] = niz[i];

        // ako ima ponavljanja, upiši i broj
        if (brojac > 1) {
            novi[k++] = brojac + '0';
        }
    }

    novi[k] = '\0'; // kraj novog niza

    printf("%s\n", novi);

    return 0;
}
