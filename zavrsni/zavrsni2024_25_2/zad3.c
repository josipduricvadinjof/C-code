#include <stdio.h>
#include <stdlib.h>

int main (void) {

    printf("Upisite cijele brojeve A, C, M, n > ");
    int A, C, M ,n;
    scanf("%d %d %d %d", &A, &C, &M, &n);
    int counter = 0;
    int *tmp = NULL;
    int *niz = NULL;
    int indeks = 0;
    int zadnji;
   int gotovo = 0;

    printf("Vrijednost zadnjeg clana nalazi se na indeksima:");


    while(gotovo == 0){

        
        tmp = realloc(niz, (indeks + 1)*sizeof(int));
        if(tmp == NULL){
            printf("Greska: ne mogu realocirati memoriju.\n");
            free(tmp);
            return 1;
        }
        
        niz = tmp;
        if(indeks == 0){
            *(niz + indeks) = 0;
            indeks++;
        } else {

            *(niz + indeks) = (A*(*(niz + indeks - 1)) + C) % M;
            indeks++;
        }

        for (int i = 0; i < indeks; i++) {
            if (*(niz + i) == *(niz + indeks - 1)) {
                counter++;
            }
            if(counter == n){
                zadnji = *(niz + indeks - 1);
                gotovo++;
            } 
        }
        counter = 0;

        
        
    }
    
    
    for(int i = 0; i < indeks; i++){
        if(*(niz + i) == zadnji){
            printf(" %d", i);
        }
    }
    free(niz);




    return 0;
}