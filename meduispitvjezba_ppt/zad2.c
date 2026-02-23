#include <stdio.h>
#define MAX_NIZ 40

int main(void) {

    printf("Niz A > ");
    char nizA[MAX_NIZ];
    fgets(nizA, sizeof(nizA), stdin);

    printf("Niz B > ");
    char nizB[MAX_NIZ];
    fgets(nizB, sizeof(nizB), stdin);

    int brojPonavljanja[26] = {0};

    // brojanje ponavljanja u B
    for (int i = 0; nizB[i] != '\0'; i++) {
        char c = nizB[i];

        if (c >= 'a' && c <= 'z') {
            brojPonavljanja[c - 'a']++;
        }
        else if (c >= 'A' && c <= 'Z') {
            brojPonavljanja[c - 'A']++;
        }
    }

    char izlaz[MAX_NIZ];
    int j = 0;

    // prolazak kroz A
    for (int i = 0; nizA[i] != '\0'; i++) {
        char c = nizA[i];

        // uzmi samo slova
        if ((c >= 'a' && c <= 'z') && brojPonavljanja[c - 'a'] >= 3) {
            izlaz[j++] = c;
        }
        else if ((c >= 'A' && c <= 'Z') && brojPonavljanja[c - 'A'] >= 3) {
            izlaz[j++] = c;
        }
    }

    // završetak stringa
    izlaz[j] = '\0';

    printf("Izlaz: %s\n", izlaz);

    return 0;
}
