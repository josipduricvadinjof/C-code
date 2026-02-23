#include <stdio.h>
#include <math.h>

int savrsen_kvadrat(int a) {
    double korijen = sqrt(a);
    if (korijen == (int)korijen)
        return 1;
    else
        return 0;
}

int factorial(int f) {
    if (f == 0)
        return 1;
    else
        return f * factorial(f - 1);
}

int zbroj_znamenaka(int z) {
    if (z == 0)
        return 0;
    else
        return (z % 10) + zbroj_znamenaka(z / 10);
}

int main(void) {
    int a;
    printf("Upisite prirodni broj > ");
    scanf("%d", &a);

    int fakt = factorial(a);
    int suma = zbroj_znamenaka(fakt);

    if (savrsen_kvadrat(suma))
        printf("Suma znamenaka od %d! je savrsen kvadrat.\n", a);
    else
        printf("Suma znamenaka od %d! nije savrsen kvadrat.\n", a);

    return 0;
}
