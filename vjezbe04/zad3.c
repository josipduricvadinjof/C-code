#include<stdio.h>

int main(void){

    float a1, a2, b1, b2;
    printf("Upisite granice 1. intervala >");
    scanf("%f %f", &a1, &a2);

    printf("Upisite granice 2. intervala >");
    scanf("%f %f", &b1, &b2);


    if ( a1 >= a2 || b1 >= b2 || a1 > b1) {


        printf("Granice intervala su neispravne");
    
   
    } else if (b1 > a2) {


        printf("Presjek je prazan skup");
        

    } else {

        float presjek1, presjek2;
        //vjet ? vrijednost_ako_je_istina : vrijednost_ako_je_laž
    
        presjek1 = (a1 > b1) ? a1 : b1;  // veća donja granica
        presjek2 = (a2 < b2) ? a2 : b2;  // manja gornja granica

        printf("Presjek intervala je: %f %f", presjek1 , presjek2);

    }
 
    return 0;
}