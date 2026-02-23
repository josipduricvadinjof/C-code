#include <stdio.h>

int main(void) {

    FILE *f = fopen("fibonacci.bin", "wb");

    int n;
    printf("Upisite n > ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("n mora biti pozitivan broj.\n");
        return 0;
    }

    int a = 0, b = 1, c;

    if (n >= 1)
        fwrite(&a, sizeof(int), 1, f);

    if (n >= 2)
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
