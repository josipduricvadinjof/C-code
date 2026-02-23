#include <stdio.h>

int main (void){

    printf("Unesite dimenzije matrice > ");
    int m, n;
    scanf("%d %d", &m, &n);

    printf("Unesite elemente matrice %dx%d", m, n);
    int matrica[m][n];
    int prosirena[m][n+1];
    for ( int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
            prosirena[i][j] = matrica[i][j];
        }
        
    }
    int stupac[n];

    for ( int i = 0; i < m; i++){
        int suma = 0;
        for(int j = 0; j < n; j++){
            suma += matrica[i][j];
            
        }

        if(suma % 2 == 0){
            stupac[i] = 0;
        } else{
            stupac[i] = 1;
        }
        
    }

   

    for (int i = 0; i < m; i++){

        prosirena[i][n] = stupac[i];
    }

    printf("Prosirena matrica je > ");

    for ( int i = 0; i < m; i++){
        for(int j = 0; j < n + 1; j++){
            printf("%d", prosirena[i][j]);
        }
        printf("\n");
        
    }


    








    return 0;
}