#include <stdio.h>

int main(void) {
    int m;
    do {
        printf("Ucitajte red matrice> ");
        scanf("%d", &m);
    } while (m < 2 || m > 10);

    int matrica[m][m];
    printf("Ucitajte %d elemenata cjelobrojne matrice> \n", m*m);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("Ucitana matrica:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d", matrica[i][j]);
        }
        printf("\n");
    }

    // POSMAK VANJSKOG RUBA SUPROTNO OD SATA
    int priv = matrica[0][0]; // čuvamo gornji lijevi kut

    // gornji red ulijevo
    for (int j = 0; j < m - 1; j++)
        matrica[0][j] = matrica[0][j + 1];

    // desni stupac gore
    for (int i = 0; i < m - 1; i++)
        matrica[i][m - 1] = matrica[i + 1][m - 1];

    // donji red udesno
    for (int j = m - 1; j > 0; j--)
        matrica[m - 1][j] = matrica[m - 1][j - 1];

    // lijevi stupac dolje
    for (int i = m - 1; i > 1; i--)
        matrica[i][0] = matrica[i - 1][0];

    matrica[1][0] = priv; // vraćamo spremljeni element

    printf("\nPosmaknuta matrica:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%4d", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
