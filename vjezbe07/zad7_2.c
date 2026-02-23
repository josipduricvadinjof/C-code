#include <stdio.h>

int main (void){

    int m, n;
    printf("Upisite m, n > ");
    scanf("%d %d", &m, &n);


    int matrica[m][n];
    printf("Upisite %d x %d clanova > ", m, n);
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    //sortirat po stupcima od najmanjeg do najveceg
    for (int j = 0; j < n; j++) {          
        for (int i = 0; i < m - 1; i++) {  
            for (int k = i + 1; k < m; k++) {
                if (matrica[i][j] > matrica[k][j]) {
                    int temp = matrica[i][j];
                    matrica[i][j] = matrica[k][j];
                    matrica[k][j] = temp;
                }
            }
    }
}

    printf("Nakon sortiranja stupaca > \n");

    for (int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%5d", matrica[i][j]);
        }
        printf("\n");
    }






    return 0;
}