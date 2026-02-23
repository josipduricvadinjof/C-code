#include <stdio.h>

void podudarni_slijed(unsigned int a, unsigned int b) {
    int brojac = 0;  // koliko je podudarnih bitova s početka

    for (int i = 31; i >= 0; i--) {
        int bitA = (a >> i) & 1;
        int bitB = (b >> i) & 1;

        if (bitA == bitB) {
            brojac++;
        } else {
            break;  // čim se razlikuju — prekid
        }
    }

    if (brojac == 0) {
        printf("Nema podudarnog slijeda.\n");
        return;
    }

    printf("Podudarni slijed:\n");

    // ispis prvih 'brojac' bitova iz prvog broja
    for (int i = 31; i > 31 - brojac; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");
}

int main(void) {
    printf("Unesite dva broja > ");
    unsigned int a, b;
    scanf("%u %u", &a, &b);

    printf("\n1. i 2. broj binarno:\n");

    for (int i = 31; i >= 0; i--) {
        printf("%d", (a >> i) & 1);
    }
    printf("\n");

    for (int i = 31; i >= 0; i--) {
        printf("%d", (b >> i) & 1);
    }
    printf("\n");

    // 🔹 Poziv funkcije
    podudarni_slijed(a, b);

    return 0;
}
