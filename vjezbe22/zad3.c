#include <stdio.h>
#include <ctype.h>

int main(void) {
    char matrica[4][4];
    char ch;
    int i = 0, j = 0;

    while (i < 4) {
        if (scanf("%c", &ch) != 1) break;   // kraj ulaza
        if (isspace(ch)) continue;           // preskoči sve bijele znakove

        matrica[i][j] = ch;
        j++;

        if (j == 4) { // idemo u novi red
            j = 0;
            i++;
        }
    }

    // Ispis u obliku tablice
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%c", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}
