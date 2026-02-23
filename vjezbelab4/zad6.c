#include <stdio.h>
#include <math.h>

int main(void) {

    float a, b, c;
    printf("Upisite tri realna broja > ");
    scanf("%f %f %f", &a, &b, &c);

    float median;
    
    if ((a >= b && a <= c) || (a >= c && a <= b))
        median = a;
    else if ((b >= a && b <= c) || (b >= c && b <= a))
        median = b;
    else
        median = c;


    float srednja;

    srednja = (float)((a + b +c) / 3.0);

    float razlika;
    razlika = fabs(median - srednja);

    printf("Apsolutna vrijednost razlike mediana i srednje vrijednosti je: %6.3f", razlika);

    
    return 0;
}
