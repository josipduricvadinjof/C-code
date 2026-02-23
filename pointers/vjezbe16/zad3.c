#include <stdio.h>

void sortRetke2D(int n, int m, int *mat, char sort) {
    int silazno = (sort == 'S' || sort == 's');

    for (int r = 0; r < n; r++) {              // svaki redak
        for (int pass = 0; pass < m - 1; pass++) {
            for (int j = 0; j < m - 1 - pass; j++) {

                int *a = mat + m*r + j;
                int *b = mat + m*r + (j + 1);

                if ((silazno && *a < *b) || (!silazno && *a > *b)) {
                    int tmp = *a;
                    *a = *b;
                    *b = tmp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d", *(mat + m*i + j));
        }
        printf("\n");
    }
}

int main(void) {
    int n, m;
    char sort;

    printf("Unesite smjer poretka (S-silazno) > ");
    scanf(" %c", &sort);

    printf("Upisite dimenzije > ");
    scanf("%d %d", &n, &m);

    int mat[n][m];

    printf("Upisite clanove > ");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            scanf("%d", &mat[i][j]);

    sortRetke2D(n, m, &mat[0][0], sort);

    return 0;
}
