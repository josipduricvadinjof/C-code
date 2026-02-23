#include <stdio.h>

int main (void){

    //S tipkovnice učitati cijeli broj n koji predstavlja broj redaka i stupaca dvodimenzionalnog polja
    int n;
    int polje [100][100];
    printf("Unesite dimenzije polja: ");
    scanf("%d", &n);

    //Po retcima učitati cijele brojeve kao vrijednosti članova polja.
    printf("Unesite elemente polja: \n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &polje[i][j]);
        }
    }

    //U drugo polje jednakih dimenzija upisati elemente jednake elementima prvog polja rotiranog za 90 stupnjeva u smjeru kazaljke na satu. 
    int rotirano[100][100];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            rotirano[j][n - 1 - i] = polje[i][j];
        }
    }

    //Ispisati dobiveno polje.
    printf("Izracunato polje: \n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", rotirano[i][j]);
        }
        printf("\n");
    }

    return 0;
}
