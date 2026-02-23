#include <stdio.h>

int main (void){

    printf("Upisite dimenziju matrice > ");
    int n;
    scanf("%d", &n);

    int matrica[n][n];
    printf("Upisite elemente matrice > ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }

    }

    int polje[n];
    for(int j = 0; j < n; j++){
        int suma = 0;
        for(int i = 0; i < n; i++){
            suma += matrica[i][j];

        }
        if(suma % 2 == 0){

            polje[j] = 0;

        } else {
            polje[j] = 1;
        }


    }

    int zasticena_matrica[n+1][n];


    // kopiramo originalnu matricu u novu
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            zasticena_matrica[i][j] = matrica[i][j];
        }
    }

    // dodajemo polje kao posljednji redak
    for (int j = 0; j < n; j++) {
        zasticena_matrica[n][j] = polje[j];
    }

    // ispis nove matrice
    printf("Zasticena matrica:\n");
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", zasticena_matrica[i][j]);
        }
        printf("\n");
    }



    return 0;
}