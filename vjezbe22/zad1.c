#include <stdio.h>

int main(void) {
    int x;
    int broj = 0;
    int zbroj = 0;

    while (scanf("%d", &x) == 1) {
        broj++;
        zbroj += x;
    }

    printf("Broj: %d\n", broj);
    printf("Zbroj: %d\n", zbroj);

    return 0;
}