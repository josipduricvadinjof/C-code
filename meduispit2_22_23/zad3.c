#include <stdio.h>

int main (void){

    printf("Unesite m > ");
    int m;
    scanf("%d", &m);

    int matrica[m][m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    int temp;
    int max;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            
        }

        if(matrica[i][i] > max){
            temp = max;
            max = matrica[i][i];
            matrica[i][i] = temp;

        }
        
    }

    printf("Ispis:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < m; j++){
            printf("%d", matrica[i][j]);
        }
    }







    return 0;
}