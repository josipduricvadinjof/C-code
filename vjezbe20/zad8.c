#include <stdio.h>
#include <math.h>

int main (void){


    double x = -12345.1234567;
    double y = fabsf(x);
    double z = fabs(x);

    printf("x:        %.7lf\n", x);
    printf("fabsf(x):  %.7lf\n", y);
    printf("fabs(x):   %.7lf\n", z);





    return 0;
}











