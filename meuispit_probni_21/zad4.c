#include <stdio.h>

int main (void){

    printf("Unesite 32-bitni broj > ");
    unsigned int b32;
    scanf("%u", &b32);

    printf("Unesite 8-bitni uzorak > ");
    unsigned int b8;
    scanf("%u", &b8);

    int brojac=0;
    for(int j = 0; j < 32; j++){
        if(((b32 >> j) & 0xFF) == b8)
        brojac++;
    }

    printf("Rezultat: %d", brojac);


    return 0;
}