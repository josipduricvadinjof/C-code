#include <stdio.h>

int main(void) {

    FILE *f = fopen("slucajni.bin", "rb");

    int n;
    int x;

    /* citanje zapisa do kraja datoteke */
    while (fread(&n, sizeof(int), 1, f) == 1) {

        /* ispis n */
        printf("%d ", n);

        /* citanje i ispis n brojeva */
        for (int i = 0; i < n; i++) {
            fread(&x, sizeof(int), 1, f);
            printf("%d ", x);
        }

        printf("\n");
    }

    fclose(f);
    return 0;
}
