#include <stdio.h>

void zbroj2D(int m, int n, double *matrica){

    double suma = 0;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            suma += *(matrica + n*i + j);
        }
    }

    
    printf ("Suma je: %lf", suma);

}

int main (void){

    int m, n;
    printf("Upisite dimenzije > ");
    scanf("%d %d", &m, &n);
    
    double matrica[m][n];
    printf("Upisite clanove >");

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%lf", &matrica[i][j]);
        }
    }

    zbroj2D(m,n, &matrica[0][0]);


    return 0;
}