#include <stdio.h>

unsigned int ciklRshift(unsigned int br, int shift) {
    shift &= 31;                // shift % 32

    if (shift == 0)
        return br;

    return (br >> shift) | (br << (32 - shift));
}

int main(void) {

    printf("Upisi dva broja: ");
    unsigned int broj1, broj2;
    scanf("%u %u", &broj1, &broj2);

    unsigned int maxXor = 0;

    for (int i = 0; i < 32; i++) {

        unsigned int rot = ciklRshift(broj2, i);  
        unsigned int Xor = broj1 ^ rot;         

        if (Xor > maxXor) {
            maxXor = Xor;
        }
    }

    printf("Maksimalni XOR je %u\n", maxXor);

    return 0;
}
