#include <stdio.h>

void BrojSlovaZnamenaka(char *niz, int *BrojSlova, int *BrojZnamenaka ){

    *BrojSlova = 0;
    *BrojZnamenaka = 0;

    for(int i = 0; niz[i] !=  '\0'; i++){
        if((niz[i] >= 'a' && niz[i] <= 'z') || (niz[i] >= 'A' && niz[i] <= 'Z')){
            *BrojSlova += 1;
        }

        if(niz[i] >= '0' &&  niz[i] <= '9'){
            *BrojZnamenaka += 1;
        }


    }
}




int main (void){

    printf("Unesite niz znakova > ");

    char niz[100];
    fgets(niz, sizeof(niz), stdin);

    int BrojSlova, BrojZnamenaka;

    BrojSlovaZnamenaka(niz, &BrojSlova, &BrojZnamenaka);

    printf("%d %d", BrojSlova, BrojZnamenaka);









    return 0;
}