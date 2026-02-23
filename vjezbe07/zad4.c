#include <stdio.h>

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n); // m = redci, n = stupci

    int polje[m][n];

    // unos polja
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &polje[i][j]);
        }
    }

    // spremi prvi redak
    int temp[n];
    for (int j = 0; j < n; j++) {
        temp[j] = polje[0][j];
    }

    // pomakni sve redke za 1 prema gore
    for (int i = 0; i < m - 1; i++) {
        for (int j = 0; j < n; j++) {
            polje[i][j] = polje[i + 1][j];
        }
    }

    // zadnji redak postaje stari prvi
    for (int j = 0; j < n; j++) {
        polje[m - 1][j] = temp[j];
    }

    // ispis rezultata
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", polje[i][j]);
        }
        printf("\n");
    }

    return 0;
}
