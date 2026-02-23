#include <stdio.h>
#define BR_REDAKA 3
#define BR_STUPACA 6
#define BR_SLOJEVA 4

int main(void) {
    int polje[BR_SLOJEVA][BR_REDAKA][BR_STUPACA] = {{{0}}};

    // Unos vrijednosti
    for (int s = 0; s < BR_SLOJEVA; s++) {
        for (int r = 0; r < BR_REDAKA; r++) {
            for (int c = 0; c < BR_STUPACA; c++) {
                polje[s][r][c] = (s + 1) * 100 + (r + 1) * 10 + (c + 1);
            }
        }
    }

    // Ispis slojeva
    for (int s = 0; s < BR_SLOJEVA; s++) {
        printf("%d. sloj\n", s + 1);
        for (int r = 0; r < BR_REDAKA; r++) {
            for (int c = 0; c < BR_STUPACA; c++) {
                printf("%5d", polje[s][r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
