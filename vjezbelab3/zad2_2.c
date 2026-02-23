#include <stdio.h>

int main (void){


    printf("Upisite broj redaka/stupaca matrice >");
    int m;
    scanf("%d", &m);

    printf("Upisite %dx%d clanova > \n", m, m);
    int matrica[m][m];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    int r, s;

    printf("Upisite redni broj retka > ");
    scanf("%d", &r);

    printf("Upisite redni broj stupca > ");
    scanf("%d", &s);

    int suma_redak = 0;
    
    for(int j = 0; j < m; j++){
        suma_redak += matrica[r][j];
            
    }

    int suma_stupac = 0;
    
    for(int i = 0; i < m; i++){
        suma_stupac += matrica[i][s];
            
    }

    int suma;

    suma = suma_redak + suma_stupac -matrica[r][s];

    printf("Suma brojeva koji se nalaze u retku %d i stupcu %d je %d ", r, s, suma);


    


    


    return 0;
}