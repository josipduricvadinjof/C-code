#include <stdio.h>

int main(void) {

    printf("Upisite red n > ");
    int n;
    scanf("%d", &n);

    printf("Upisite elemente >\n");
    int polje[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &polje[i][j]);
        }
    }

   
    int zbrojg[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            zbrojg[i][j] = polje[i][j];

            // ako postoji gornji lijevi element
            if (i - 1 >= 0 && j - 1 >= 0)
                zbrojg[i][j] += polje[i - 1][j - 1];

            // ako postoji gornji desni element
            if (i - 1 >= 0 && j + 1 < n)
                zbrojg[i][j] += polje[i - 1][j + 1];
        }
    }

    int max_zbrojg = 0;
    int indeksI = -1, indeksJ = -1;  
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (max_zbrojg < zbrojg[i][j]) {  
                max_zbrojg = zbrojg[i][j];
                indeksI = i + 1;  
                indeksJ = j + 1;
            }
        }
    }

    printf("Najveci zbroj gornje-dijagonalnih elemenata je %d za element (%d, %d)",max_zbrojg, indeksI, indeksJ);

    return 0;
}
