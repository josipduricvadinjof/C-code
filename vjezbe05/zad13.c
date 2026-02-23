//Napisati program koji će ispisati prvih 25 prim brojeva
#include <stdio.h>

#include <stdio.h>

int main(void) {
    int n = 2;                 // broj koji ce se testirati
    int djeljitelj, djeljiv, brojIspisanih = 0;

    while (brojIspisanih < 25) {
        djeljiv = 0;           // pretpostavka: n nije djeljiv
        djeljitelj = 2;        // pocinje provjerom djeljenja s 2

        while (djeljitelj <= n - 1 && djeljiv == 0) {
            if (n % djeljitelj == 0) {
                djeljiv = 1;   // broj je djeljiv, nije prost
            }
            djeljitelj = djeljitelj + 1;
        }

        if (djeljiv == 0) {
            printf("%d\n", n); // ispis prostog broja
            brojIspisanih = brojIspisanih + 1;
        }

        n = n + 1;             // prijeđi na sljedeći broj
    }

    return 0;
}
