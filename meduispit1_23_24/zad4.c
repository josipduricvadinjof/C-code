#include <stdio.h>

int main(void) {
    unsigned int b32;
    scanf("%u", &b32);   // 32-bitni broj

    unsigned int b8;
    scanf("%u", &b8);    // uzorak koji tražimo

    int brojbit;
    scanf("%d", &brojbit); // duljina uzorka u bitovima (1–8)

    int brojac = 0;

    // Petlja kroz sve moguće početne pozicije uzorka
    for (int j = 0; j <= 32 - brojbit; j++) {

        int isti = 1;  // pretpostavi da se uzorak poklapa

        for (int k = 0; k < brojbit; k++) {
            // uzmi k-ti bit uzorka (od LSB)
            int bit_uzorka = (b8 >> k) & 1;
            // uzmi odgovarajući bit iz b32 (pomaknut za j)
            int bit_b32 = (b32 >> (j + k)) & 1;

            if (bit_uzorka != bit_b32) {
                isti = 0;
                break;
            }
        }

        if (isti)
            brojac++;
    }

    printf("Obrazac se pojavljuje %d puta.\n", brojac);

    return 0;
}
