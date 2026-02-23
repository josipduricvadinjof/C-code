#include <stdio.h>

void poredaj(double *p1, double *p2, double *p3){

    double pomocna, pomocna2;

    if(*p1 >= *p2){
        pomocna = *p1;
        *p1 = *p2;
        *p2 = pomocna;
    }

    if(*p2 >= *p3){
        pomocna2 = *p2;
        *p2 = *p3;
        *p3 = pomocna2;
    }

    printf("%lf %lf %lf", *p1, *p2, *p3);
}


int main (void){

    double a, b, c, *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf("Upisite tri realna broja > ");
    scanf("%lf %lf %lf", &a, &b, &c);

    poredaj(p1,p2,p3);




    return 0;
}