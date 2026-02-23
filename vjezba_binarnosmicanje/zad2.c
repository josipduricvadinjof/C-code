#include <stdio.h>

int main (void){

    unsigned int broj;

    scanf("%u", &broj);

    int brojac = 0;

    for (int i = 0; i < 32; i++){

        if(((broj >> i) & 0x1) == 1){
            brojac++;
        }

    }

    printf("Broj jedinica: %d", brojac);

    return 0;
}