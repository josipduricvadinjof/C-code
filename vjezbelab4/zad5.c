#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    printf("Upisite broj n: ");
    scanf("%d", &n);

    double e_approx = 1.0;
    double faktorijel = 1.0;

    for (int i = 1; i <= n; i++) {
        faktorijel *= i;
        e_approx += 1.0 / faktorijel;
    }

    double e = exp(1);
    double razlika = e_approx - e;

    printf("Aproksimacija e: %.12lf\n", e_approx);
    printf("Razlika: %.12lf", razlika);

    return 0;
}
