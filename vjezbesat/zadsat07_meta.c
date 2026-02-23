#include <stdio.h>

int main(void){
    int n;
    scanf("%d", &n);
    int mat[100][100] = {0};

    int p = 0, d = n, i;

    while (d > 0){
        for (i = 0; i < d; i++){
            mat[p][p + i] = 1;          
            mat[p + d - 1][p + i] = 1;  
            mat[p + i][p] = 1;          
            mat[p + i][p + d - 1] = 1;  
        }
        p = p + 2;
        d = d - 4;
    }

    for (i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == 0)
                printf(" ");
            else
                printf("1");
        }
        printf("\n");
    }

    return 0;
}
