#include <stdio.h>

int main (void){

    printf("Unesite dimenziju ploce > ");
    int n;
    scanf("%d", &n);

    int polje[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           polje[i][j] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            // 8 poteza konja
            if (i + 2 < n && j + 1 < n) polje[i][j]++;
            if (i + 2 < n && j - 1 >= 0) polje[i][j]++;
            if (i - 2 >= 0 && j + 1 < n) polje[i][j]++;
            if (i - 2 >= 0 && j - 1 >= 0) polje[i][j]++;

            if (i + 1 < n && j + 2 < n) polje[i][j]++;
            if (i + 1 < n && j - 2 >= 0) polje[i][j]++;
            if (i - 1 >= 0 && j + 2 < n) polje[i][j]++;
            if (i - 1 >= 0 && j - 2 >= 0) polje[i][j]++;
        }
    }

    // ispis
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           printf("%d ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}
