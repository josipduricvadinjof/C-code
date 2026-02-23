#include <stdio.h>

int srednji(int a, int b, int c){

    int sred;

    if ((a >= b && a <= c) || (a <= b && a >= c))
        sred = a;
    else if ((b >= a && b <= c) || (b <= a && b >= c))
        sred = b;
    else
        sred = c;
    
     printf("Srednji broj od %d %d %d je %d", a, b, c, sred);

}



int main (void){

    int a, b,c;

    printf ("Upisite tri prirodna broja > ");
    scanf("%d %d %d", &a, &b, &c);

    srednji(a, b, c);


    return 0;
}

