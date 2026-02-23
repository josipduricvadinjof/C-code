#include <stdio.h>

int main (void){

    unsigned int broj;

    scanf("%u", &broj);

    int posmak;
    scanf("%d", &posmak);

    
    unsigned int izlaz = (broj & (1U << posmak) - 1);
    
    printf("Izlaz: %u", izlaz);

    return 0;
}