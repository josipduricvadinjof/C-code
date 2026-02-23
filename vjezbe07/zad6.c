#include <stdio.h>

int main (void){

    int m, n;

    printf("Upisite m [4, 8] > ");
    scanf("%d", &m);

    while (m < 4 || m > 8) {
        printf("Upisite m [4, 8] > ");
        scanf("%d", &m);
        print("\n");
    }

    printf("Upisite n [5, 10] > ");
    scanf("%d", &n);

    while (n < 5 || n > 10) {
        printf("Upisite n [5, 10] > ");
        scanf("%d", &n);
        print("\n");
    }

    int polje[m][n];

    printf("Upisite 5 x 6 clanova >\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf(" %d", &polje[i][j]);
        }

    }


    printf("Sume po stupcima: \n");

    for(int j = 0; j < n; j++){
        int suma = 0;
        for(int i = 0; i < m; i++){
            suma = suma + polje[i][j];
        }

        printf("%5d", suma);

    }






    
    return 0;
}