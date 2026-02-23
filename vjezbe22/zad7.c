#include <stdio.h>

int main(void) {
    int n;
    printf("Upisati n > ");
    scanf("%d", &n);

    printf("Tablica mnozenja %d x %d\n", n, n);

    // Zaglavlje
    printf("       ");  // prazni prostor za redni broj
    for (int j = 1; j <= n; j++) {
        printf("%4d", j);
    }
    printf("\n");

    // Linija ispod zaglavlja
    printf("----+");
    for (int j = 1; j <= n; j++) {
        printf("----");
    }
    printf("\n");

    // Redovi tablice
    for (int i = 1; i <= n; i++) {
        printf("%3d !", i);  // broj reda
        for (int j = 1; j <= n; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }

    // Linija na kraju tablice
    printf("----+");
    for (int j = 1; j <= n; j++) {
        printf("----");
    }
    printf("\n");

    return 0;
}
