#include <stdio.h>

int main(void) {

    unsigned int broj;
    unsigned int obrazac;
    int brojbitova;

    scanf("%u %u %d", &broj, &obrazac, &brojbitova);

    unsigned int maska = (1U << brojbitova) - 1;   
    int count = 0;

    for (int i = 0; i <= 32 - brojbitova; i++) {

       
        unsigned int segment = (broj >> i) & maska;

        if (segment == obrazac)
            count++;
    }

    printf("Obrazac se pojavljuje %d puta.\n", count);

    return 0;
}
