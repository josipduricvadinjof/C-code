#include<stdio.h>
#define PI 3.14159265359
#include <math.h>

int main(void){

    float radijus;
    printf("Upisite radijus kugle >");
    scanf("%f", &radijus);
    
    float volumen;
    volumen = pow(radijus, 3) * 4/3 * PI;

    if (radijus > 0) {

        printf("Volumen kugle radijusa %f je %f ", radijus, volumen);
    }

    else {
        printf("Neispravan radijus kugle.");
    }

    return 0;
}