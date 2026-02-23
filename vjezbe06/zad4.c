#include <stdio.h>

int main(void) {
    int brojevi[10];

    printf("Upisite 10 cijelih brojeva > ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &brojevi[i]);
    }

    // Ispis u obrnutom poretku
    for (int i = 9; i >= 0; i--) {
        printf("%d", brojevi[i]);
        if (i > 0) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
