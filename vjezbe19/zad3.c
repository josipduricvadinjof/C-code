#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void){

    int duljina;
    printf("Duljina polja > ");
    scanf("%d\n", &duljina);

    printf("Znakovi (bez razmaka) > ");

    char *znakovi = malloc((duljina + 1)*sizeof(char));
        if(znakovi == NULL){
            free(znakovi);
            return 1;
        }
    

    scanf("%s", znakovi);

    printf("Brojevi > ");
    int *brojevi = malloc(duljina * sizeof(int));
        if(brojevi == NULL){
            free (brojevi);
            return 1;
        }
    

    for(int i = 0; i < duljina; i++){
        scanf("%d", &brojevi[i]);
    }

    printf("Generirani niz: ");
    char *generiraniNiz = NULL;
    char *tmp = NULL;
    int velicina = 0;

    for(int i = 0; i < duljina; i++){
        for(int j = 0; j < brojevi[i]; j++){

            tmp = realloc(generiraniNiz, (velicina + 1)*sizeof(char));
                if(tmp == NULL){
                    free(znakovi);
                    free(brojevi);
                    free(generiraniNiz);
                    return 1;
                }
            

            generiraniNiz = tmp;
            generiraniNiz[velicina] = znakovi[i];
            velicina++;
        }
    }

    printf("%s", generiraniNiz);
    





    return 0;
}