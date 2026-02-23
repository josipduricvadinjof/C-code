#include <stdio.h>

void ispis_binarno(unsigned int broj) {
    for (int i = 31; i >= 0; i--) {
        printf("%d", (broj >> i) & 1);
    }
}

unsigned int obrni_bitove(unsigned int broj) {
    unsigned int obrnuto = 0;

    for (int i = 0; i < 32; i++) {
        if (broj & (1u << i)) {
            obrnuto |= (1u << (31 - i));
        }
    }

    return obrnuto;
}

int main(void) {

    printf("Unesite broj > ");
    unsigned int broj;
    scanf("%u", &broj);

    printf("Broj binarno: ");
    ispis_binarno(broj);
    printf("\n");

    unsigned int obrnuto = obrni_bitove(broj);

    printf("Obrnuti binarno: ");
    ispis_binarno(obrnuto);
    printf("\n");

    printf("Obrnuti dekadski: %u", obrnuto);

    return 0;
}
