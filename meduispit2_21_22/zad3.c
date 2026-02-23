#include <stdio.h>

int main (void){

    int a1, a2, maxSuma;

    printf("Upisite tri prirodna broja > ");
    scanf("%d %d %d", &a1, &a2, &maxSuma);

    int niz[100];
    int suma = 0;

    niz[1] = a1;
    niz[2] = a2;

    printf("Rezultat: ");

    int i = 1;

    // ispis a1
    if (a1 < maxSuma) {
        printf("%d", a1);
        suma += a1;
        i = 2;

        // ispis a2
        if (suma + a2 < maxSuma) {
            printf(", %d", a2);
            suma += a2;
            i = 3;
        }
    }

    for (; i <= 100; i++) {

        if (i % 2 != 0)
            niz[i] = niz[i - 2] * 3;
        else
            niz[i] = niz[i - 2] * 2;

        if (suma + niz[i] >= maxSuma)
            break;

        printf(", %d", niz[i]);
        suma += niz[i];
    }

    return 0;
}
