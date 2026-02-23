#include <stdio.h>
#include <stdlib.h>

void IzvlacenjeLota_6_od_45(int* kombinacija){

    int broj;
    for(int i = 0; i < 6; i++){

        broj = rand() % ( 45 - 6 + 1) + 6;
        *(kombinacija + i) = broj;

    }




}


