#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);

    int polje[m][n];

    // unos polja
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &polje[i][j]);
        }
    }

    // traženje i ispis najmanjih elemenata po stupcima
    for (int j = 0; j < n; j++) {
        int min = polje[0][j];

        // pronađi najmanju vrijednost u stupcu j
        for (int i = 1; i < m; i++) {
            if (polje[i][j] < min) {
                min = polje[i][j];
            }
        }

        // ispiši sve indekse koji imaju tu vrijednost
        printf("%d. stupac: ", j + 1);
        int first = 1;
        for (int i = 0; i < m; i++) {
            if (polje[i][j] == min) {
                if (!first) printf(", ");
                printf("(%d, %d)", i, j);
                first = 0;
            }
        }
        printf("\n");  // novi red nakon svakog stupca
    }

    return 0;
}
