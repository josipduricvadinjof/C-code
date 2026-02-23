#include <stdio.h>

int main(void) {
    float x;
    int r;

    while (1) {
        r = scanf("%f", &x);

        if (r == 1) {                // uspješan unos
            printf("%6.2f\n", x);
        } else if (r == 0) {         // neispravan znak
            fprintf(stderr, "Unos je prekinut neispravnim znakom\n");
            break;
        } else if (r == EOF) {       // kraj datoteke
            fprintf(stderr, "Kraj datoteke\n");
            break;
        }
    }

    return 0;
}
