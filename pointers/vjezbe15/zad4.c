#include <stdio.h>
#include <math.h>

void korijeni(unsigned int n, double *p1, double *p2, double *p3 ){

    *p1 = sqrt(n);
    *p2 = cbrt(n);
    *p3 = pow(n, 0.25);

}



int main (void){

    unsigned int n;
    double a, b, c;

    printf("Upisite nenegativni cijeli broj > ");
    scanf("%u", &n);

    

    korijeni(n, &a, &b, &c);

    printf("Rezultati su:\n");
    printf("%.8f\n", a);
    printf("%.8f\n", b);
    printf("%.8f\n", c);


    return 0;
}