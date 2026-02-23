#include <stdio.h>

int main(void) {

    FILE *f = fopen("fibonacci.bin", "wb");

    int a = 1, b = 1, c;
    int n = 40;

    /* upis prvog i drugog člana */
    fwrite(&a, sizeof(int), 1, f);
    fwrite(&b, sizeof(int), 1, f);

    for (int i = 3; i <= n; i++) {
        c = a + b;
        fwrite(&c, sizeof(int), 1, f);
        a = b;
        b = c;
    }

    fclose(f);
    return 0;
}
