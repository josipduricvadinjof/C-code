#include <stdio.h>

void transpKvad(int n, int *mat) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {

            int tmp = *(mat + n*i + j);
            *(mat + n*i + j) = *(mat + n*j + i);
            *(mat + n*j + i) = tmp;

        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%d", *(mat + n*i + j));
        }
    }
}

int main (void){

    int n;
    printf("Upisite red matrice");
    scanf("%d", &n);

    int mat[n][n];
    printf("Upisite clanove");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            scanf("%d",&mat[i][j]);
        }
    }

    transpKvad(n, &mat[0][0]);




    return 0;
}