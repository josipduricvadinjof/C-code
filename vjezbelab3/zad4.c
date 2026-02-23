#include <stdio.h>

int main(void) {
    char niz[151];
    char rezultat[151];
    int j = 0;

    printf("Upisite znakovni niz > ");
    fgets(niz, sizeof(niz), stdin);

    for (int i = 0; niz[i] != '\0'; i++) {
        // zadrži samo engleska slova (A-Z ili a-z)
        if ((niz[i] >= 'A' && niz[i] <= 'Z') || (niz[i] >= 'a' && niz[i] <= 'z')) {
            rezultat[j] = niz[i];
            j++;
        }
    }

    rezultat[j] = '\0'; // kraj stringa

    printf("Izlazni znakovni niz je : ");
    if (j == 0)
        printf("prazan string\n");
    else
        printf("%s\n", rezultat);

    return 0;
}
