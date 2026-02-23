#include <stdio.h>
#include <string.h>
#define MAX_NIZ 50

int main(void) {
    char niz[MAX_NIZ];
    int brojac[128] = {0};  // za sve ASCII znakove

    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);

    // makni novi red ako postoji
    for (int i = 0; niz[i] != '\0'; i++) {
    if (niz[i] == '\n')
        niz[i] = '\0';
}
    // brojanje znakova
    for (int i = 0; niz[i] != '\0'; i++) {
        brojac[(unsigned char)niz[i]]++;
    }

    // pronalazak najvećeg broja pojavljivanja
    int max = 0;
    for (int i = 0; i < 128; i++) {
        if (brojac[i] > max)
            max = brojac[i];
    }

    // ispis najčešćih znakova
    printf("Najcesce se pojavljuje znak(ovi): ");
    for (int i = 0; i < 128; i++) {
        if (brojac[i] == max)
            printf("%c ", i);
    }

    printf("\nBroj ponavljanja: %d\n", max);

    return 0;
}


