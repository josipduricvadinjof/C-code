#include<stdio.h>

int main(void){

    int broj1, broj2, a, b;
    printf("Upisite dva cijela broja >");
    scanf("%d %d", &broj1, &broj2);

    a = broj1;
    b = broj2;
    

    if ( a < b) {


        printf("Zamjena nije obavljena\n");
        printf("a = %d, b = %d", a, b);

   
    } else if (a > b) {

        int p;
        p = a;
        a = b;
        b = p;

        printf("Zamjena je obavljena\n");
        printf("a = %d, b = %d", a, b);


    } else {

        printf("Brojevi su jednaki\n");
        printf("a = b = %d", a);
    }
 
    return 0;
}