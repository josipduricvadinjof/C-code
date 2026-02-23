#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    FILE *f = fopen("slucajni.bin", "wb");

    srand((unsigned)time(NULL));

    for (int i = 0; i < 50; i++) {

        /* slucajni n iz [2, 8] */
        int n = rand() % 7 + 2;   // 2..8
        fwrite(&n, sizeof(int), 1, f);

        /* n slucajnih brojeva iz [150, 160] */
        for (int j = 0; j < n; j++) {
            int x = rand() % 11 + 150;  // 150..160
            fwrite(&x, sizeof(int), 1, f);
        }
    }

    fclose(f);
    return 0;
}
