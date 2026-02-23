#include <stdio.h>

int main(void) {

    unsigned short int broj;

    printf("Unesite broj > ");
    scanf("%hu", &broj);

    printf("Binarni zapis broja : ");

    for(int j = 15; j >= 0; j--){
        printf("%d", (broj >> j) & 0x1);
    }


    int indeks = -1;
    for(int j = 15; j >= 0; j++){
        if(((broj >> j) & 0x1) == 1){
            indeks = j;
            break;
        }
    }
    printf("\n");

    if (indeks == -1)
        printf("Nema bita s vrijednosti 1.\n");
    else
        printf("Indeks najznacajnijeg bita s vrijednosti 1: %d\n", indeks);

    
    return 0;
}
