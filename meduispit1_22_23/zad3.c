#include <stdio.h>

int main (void){

    int m, n;

    printf("Unesite m > ");
    scanf("%d", &m);

    printf("Unesite n > ");
    scanf("%d", &n);

    int matrica[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    int d;
    printf("Unesite trazenu udaljenost > ");
    scanf("%d", &d);

    for(int i = 0; i < m; i++){
        int brojac = 0;

        for(int j = 0; j < n; j++){
            if(matrica[i][j + 1] - matrica[i][j] == d){
                brojac++;
            }

            
        }

        printf("%d. redak, parova: %d\n", i + 1, brojac);
    }
    





    return 0;
}