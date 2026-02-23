#include <stdio.h>

void suma(double n){
    double rezultat;
    rezultat = 2*n / (n + 1);

    printf("%.9lf", rezultat);
}

int main (void){

    printf("Unesite n > ");
    int n;
    scanf("%d", &n);

    if(n <= -1){
        printf("Neispravan n");
    } else{
        suma(n);
    }

    return 0;
}