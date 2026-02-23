#include <stdio.h>

int main (void) {

    int broj;

    printf("Upisite 5-znamenkasti cijeli broj >");
    scanf("%d", &broj);

    int prva = broj / 10000;
    int treca = (broj % 1000) / 100;
    int peta = broj % 10;

    printf("%d %d %d", prva, treca, peta);

    return 0;

}