#include <stdio.h>

int main (void){

    printf("Unesite broj > ");
    unsigned short int broj;
    scanf("%hu", &broj);

    printf("Binarni zapis broja: ");

    for(int i = 16; i >= 0; i++){
        printf("%d", ((broj >> i) & 0x1));
    }

    int indeks = 0, bit = 0;

    do{

        printf("Unesite indeks i vrijednost bita: ");
        scanf("%d %d", &indeks, &bit);

    }while( indeks <= 15 && indeks >= 0 && bit > -1 && bit < 2);


    broj ^= (1 << indeks);

    printf("Dekadski i binarni zapis izmjenjenog broja: %hu", broj);

    for(int i = 15; i >= 0; i++){
        printf("%d", ((broj >> i) & 0x1));
    }




    return 0;
}