#include <stdio.h>

_Bool Ekstrem(float *x, float *y){


    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    // koordinata x ekstrema
    *x = -b / (2 * a);

    // koordinata y ekstrema
    *y = a * (*x) * (*x) + b * (*x) + c;

   
    if (a > 0)
        return 1;   // minimum
    else
        return 0;   // maksimum

}


int main (void){

    float x, y;
    printf("Upisite koeficijente kvadratne funkcije > \n");
    

    _Bool vrijednost = Ekstrem(&x,&y);

    if(vrijednost == 1){

        printf("Funkcija ima minimum u (%.2f, %.2f)", x, y);

    }else{

        printf("Funkcija ima maksimum u (%.2f, %.2f)", x, y);

    }



    return 0;
}











