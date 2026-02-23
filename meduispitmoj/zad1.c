#include <stdio.h>

int main (void){

    int m, n;
    do{

        printf("Unesite m i n: ");
        scanf("%d %d", &m, &n);
    }while((m * n) > 100);


    int matrica[m][n];

    printf("Unesite elemente matrice:\n");
    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            scanf("%d", &matrica[i][j]);
        }
    }

    //odredit lokalne maksimume

    int lokmax[m*n];
    int k = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            if(matrica[i][j] > matrica[i][j-1] && matrica[i][j] > matrica[i][j+1] && matrica[i][j] > matrica[i - 1][j] && matrica[i][j] > matrica[i + 1][j]){
                
                lokmax[k] = matrica[i][j];
                k++;
            }

        }
    }


    printf("Matrica:\n");
    k = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
           

            if(matrica[i][j] == lokmax[k]){
                printf("%4d*", matrica[i][j]);
                k++;
            } else {
                printf("%5d", matrica[i][j]);
            }
            

            
        }
        printf("\n");
    }


    return 0;
}