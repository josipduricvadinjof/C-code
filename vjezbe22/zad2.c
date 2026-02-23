#include <stdio.h>

int main(void) {
    int d, m, g;

    if (scanf("#%2d#%2d#%4d", &d, &m, &g) == 3) {
        printf("%d.%d.%d", d, m, g);
    } else {
        printf("Neispravan datum");
    }

    return 0;
}
