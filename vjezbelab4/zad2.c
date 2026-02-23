#include <stdio.h>

int main(void) {
    
    printf("Unesite broj > ");

    unsigned short int broj;
    scanf("%hu", &broj);

    printf("Binarni zapis ucitanog broja: ");
    for(int j = 15; j >= 0; j--){
        printf("%d", ((broj >> j) & 0x1));
    }

    int indeks = -1;
    for(int j = 0; j < 16; j++){
        if(((broj >> j) & 0x1) == 0){
            indeks = j;
            break;
        }
    }

    printf("\n");

    if(indeks == -1){
        printf("Nema bita s vrijednosti 0.");
    }else{
        printf("Indeks najmanje znacajnog bita s vrijednosti 0: %d", indeks);
    }

    return 0;
}
