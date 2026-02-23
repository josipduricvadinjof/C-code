#include <stdio.h>
#include <stdlib.h>

int main (void){

    printf("Unesite zeljenu sumu: ");
    int zeljenaSuma;
    scanf("%d\n", &zeljenaSuma);

    int suma = 0;
    int *adresaMemorije = NULL;
    int *tmp = NULL;
    int brojElemenata = 0;
    int unos;
    

    while(suma != zeljenaSuma){

        tmp =realloc(adresaMemorije, (brojElemenata + 1) * sizeof(int));
        if(tmp == NULL){
            printf("Nema dovoljno memorije. Niste uspjeli postići zeljenu sumu.");
            free(adresaMemorije);
            return 1;
        } 

            printf("Unesite cijeli broj: ");
            scanf("%d\n", &unos);

            adresaMemorije = tmp;
            adresaMemorije[brojElemenata] = unos;
            brojElemenata++;
            suma += unos;

        


    }

    printf("Uneseni brojevi koji cine zeljenu sumu: ");
    for (int i = 0; i < brojElemenata; i++) {
        printf("%d ", adresaMemorije[i]);
    }
    printf("\n");

    free(adresaMemorije);


    return 0;
}