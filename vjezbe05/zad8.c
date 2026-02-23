#include <stdio.h>

int main(void) {
    int n, i, j, rbr = 1;

    printf("Upisite broj > ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Broj je neispravan\n");
    } else {
        for (i = 0; i < n; i = i + 1) {
            for (j = 0; j < n; j = j + 1) {
                if (i <= j) {
                    printf("%4d", rbr);
                    rbr = rbr + 1;
                } else {
                    printf("    "); // četiri razmaka umjesto " ", 0
                }
            }
            printf("\n");
        }
    }

    return 0;
}
