#include <stdio.h>

int main (void){

    //S tipkovnice učitava cijeli broj n – broj redaka i stupaca kvadratne matrice
    int n;
    printf("Upisite broj redaka/stupaca matrice >");
    scanf("%d", &n);
    //Učitava sve elemente matrice dimenzije n × n
    int matrica[100][100];
    printf ("Upisite %d x %d clanova >", n, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }
    
    int najveci = matrica[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(najveci < matrica[i][j]){
                najveci = matrica[i][j];
            }
        }
    }
    //Na temelju svih redaka pronalazi najveći element cijele matrice i redak u kojem se on nalazi.
    int redaknajveceg;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(najveci < matrica[i][j]){
                najveci = matrica[i][j];
                redaknajveceg = i;
            }
        }
    }
    //Ispisuje najveći pronađeni element te sve članove retka u kojem se taj element nalazi.
    printf("Najveci clan: %d", najveci);
    printf("Redak (%d): ", redaknajveceg);
    for (int j = 0; j < n; j++) {
        printf("%d ", matrica[redaknajveceg][j]);
    }

    return 0;
}