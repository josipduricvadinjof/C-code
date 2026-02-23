#include <stdio.h>
#include <math.h>

void sumaPotencija(int a, int b, int c, int n, int *rez1, int *rez2){

    
    *rez1 = pow(a, n) + pow(b, n) + pow(c, n);
    *rez2 = pow(a+b+c, n);


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