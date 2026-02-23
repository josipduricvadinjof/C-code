#include <stdio.h>

int main (void){

    int m, n;

    do{
        printf("Unesite m > ");
        scanf("%d", &m);

    } while(m < 0 );

    do{
        printf("Unesite n > ");
        scanf("%d", &n);

    } while(n < 0 );

    int matrica[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
        
            if(matrica[i][j] >= 0 ){
                if(i % 2 == 0){
                    matrica[i][j] = 0;
                } else if(i % 2 != 0){
                    matrica[i][j] = 1;
                }


            }
        }
    }

    printf("Rezultat:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%3d", matrica[i][j]);
        }
        printf("\n");
    }


    return 0;
}

