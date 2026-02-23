#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));

    int frek[11] = {0}; // za brojeve 50..60

    // Generiramo 1,000,000 slučajnih brojeva
    for (int i = 0; i < 1000000; i++) {
        int broj = 50 + rand() % 11; // 50..60
        frek[broj - 50]++;
    }

    // Ispis frekvencija
    for (int i = 0; i < 11; i++) {
        printf("%d %d\n", i + 50, frek[i]);
    }

    return 0;
}
