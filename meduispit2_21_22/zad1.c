#include <stdio.h>

int main (void){

    int n;
    do{

        printf("Upisite n > ");
        scanf("%d", &n);

    } while(n < 0);

    int matrica[n][n];  
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(i % 2 != 0){

                if(i + j == n - 1){
                    matrica[i][j] = 1;
                }

            }

            if(i % 2 == 0){

                if(i + j == n - 1){
                    matrica[i][j] = 0;
                }

            }


        }
        
    }

    printf("Rezultat:\n");

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%3d", matrica[i][j]);
        }
        printf("\n");
    }






    return 0;
}