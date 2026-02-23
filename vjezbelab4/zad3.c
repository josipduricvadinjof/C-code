#include <stdio.h>

int main (void){

    printf("Unesite dva broja > ");
    unsigned short int broj1, broj2;

    scanf("%hu %hu", &broj1, &broj2);

    int udaljenost = 0;

    for(int j = 0; j < 16; j++){
        if(((broj1 >> j) & 0x1) != ((broj2 >> j) & 0x1) ){
            udaljenost++;
        }
    }

    printf("Hammingova udaljenost: %d", udaljenost);


    return 0;
}