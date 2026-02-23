#include <stdio.h>
#include <math.h>

struct Tocka {
    double x, y;
    double d;  // udaljenost od centra mase
};

double udaljenost(struct Tocka t, double cx, double cy) {
    return sqrt((t.x - cx)*(t.x - cx) + (t.y - cy)*(t.y - cy));
}

int main(void) {

    int n;

    do {
        printf("Upisati n > ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    struct Tocka tocke[n];

    printf("Upisati clanove > ");
    for (int i = 0; i < n; i++) {
        scanf("%lf %lf", &tocke[i].x, &tocke[i].y);
    }

    // --- Centar mase ---
    double sumax = 0, sumay = 0;

    for (int i = 0; i < n; i++) {
        sumax += tocke[i].x;
        sumay += tocke[i].y;
    }

    double centarx = sumax / n;
    double centary = sumay / n;

    printf("Centar mase: (%.2lf, %.2lf)\n", centarx, centary);

    // --- izračun udaljenosti ---
    for (int i = 0; i < n; i++) {
        tocke[i].d = udaljenost(tocke[i], centarx, centary);
    }

    // --- Sortiranje bubble sort ---
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tocke[j].d > tocke[j + 1].d) {

                struct Tocka temp = tocke[j];
                tocke[j] = tocke[j + 1];
                tocke[j + 1] = temp;
            }
        }
    }

    // --- Ispis točaka ---
    printf("Tocke: ");
    for (int i = 0; i < n; i++) {
        printf("(%.2lf, %.2lf)", tocke[i].x, tocke[i].y);
    }

    return 0;
}
