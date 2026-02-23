#include<stdio.h>

int main(void){

    float broj1, broj2;
    printf("Upisite dva realna broja >");
    scanf("%f" "%f", &broj1, &broj2);

    printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) >");
    int odabir1;
    scanf("%d", &odabir1);
    

    if (odabir1 == 2) {

        float rezultat;
        rezultat = broj1 * broj2;

        printf("Umnozak je: %f", rezultat);
   
    } else if (odabir1 == 1) {

        float rezultat;
        rezultat = broj1 + broj2;

        printf("Zbroj je: %f", rezultat);


    } else {

        printf("Neispravan odabir operacije.");
    }
 
    return 0;
}