#include <stdio.h>
#include <stdlib.h>

int main (void){

    char *tmpz = NULL;
    char *tmpbz = NULL;
    int *tmpb = NULL;

    char *znakovi = NULL;
    char *brznakovi = NULL;
    int *brojevi = NULL;

    int indeksz = 0;
    char znak;

    int indeksb = 0;
    int broj;

    int indeksbz = 0;
    

    printf("Duljina polja > ");
    int duljina;
    scanf("%d\n", &duljina);

    printf("Znakovi (bez razmaka) > ");

    for(int i = 0; i < duljina; i++){

        tmpz = realloc(znakovi, (indeksz + 1) * sizeof(char) );
        if(tmpz == NULL){
            printf("Greska: ne mogu realocirati memoriju.\n");
            free(tmpz);
            return 1;
        }

        znakovi = tmpz;
        scanf("%c", &znak);
        *(znakovi + indeksz) = znak;
        
        indeksz++;
        

    }

    
    

    printf("Brojevi > ");

    for(int i = 0; i < duljina; i++){

        tmpb = realloc(brojevi, (indeksb + 1) * sizeof(int) );
        if(tmpb == NULL){
            printf("Greska: ne mogu realocirati memoriju.\n");
            free(tmpb);
            return 1;
        }

        brojevi = tmpb;
        scanf("%d", &broj);
        *(brojevi + indeksb) = broj;
        
        indeksb++;
        

    }

    printf("\nGenerirani niz: ");

    for(int i = 0; i < duljina; i++){

        tmpbz = realloc(brznakovi, (indeksbz + *(brojevi + i)) * sizeof(char) );
        if(tmpbz == NULL){
            printf("Greska: ne mogu realocirati memoriju.\n");
            free(tmpbz);
            return 1;
        }

        brznakovi = tmpbz;

        
        int granica = indeksbz + *(brojevi + i);

        while (indeksbz < granica) {
            *(brznakovi + indeksbz) = *(znakovi + i);
            indeksbz++;
        }
        

    }

    printf("%s", brznakovi);




    free(brojevi);
    free(znakovi);
    free(brznakovi);


    return 0;
}