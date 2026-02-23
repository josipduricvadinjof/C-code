#include <stdio.h>

int main (void){

    unsigned int broj;

    scanf("%u", &broj);

    int pozicija;
    scanf("%d", pozicija);

    

    int bit = ((broj >> pozicija) & 1);

    printf("Bit na poziciji %d je %d", pozicija, bit);


    return 0;
}