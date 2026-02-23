#include <stdio.h>

int main(void) {
    printf("Upisite dimenzije dvodimenzijskog polja > ");
    int g, f;
    scanf("%d %d", &g, &f);

    int tablica[g][f];

    for (int i = 0; i < g; i++) {
        printf("Upisite ocjene %d. gledatelja > ", i);
        for (int j = 0; j < f; j++) {
            scanf("%d", &tablica[i][j]);
        }
    }

    for (int i = 0; i < g; i++) {
        int max_ocjena = tablica[i][0];
        int film = 0;
        float suma = 0;

        for (int j = 0; j < f; j++) {
            if (tablica[i][j] > max_ocjena) {
                max_ocjena = tablica[i][j];
                film = j;
            }
            suma += tablica[i][j];
        }

        float prosjek = suma / f;

        printf("%d. gledatelj je dao najvecu ocjenu %d. filmu, a prosjecna ocjena kojom je ocijenio filmove iznosi %.1f\n",
               i, film, prosjek);
    }

    return 0;
}
