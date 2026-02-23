#include <stdio.h>

int main(void){

    int odabir;
    printf("Program za konverziju Fahrenheit - Celsius ili obrnuto.");
    printf("\nZa F u C upisite 1, a za C u F bilo koji drugi cijeli broj >");
    scanf("%d" , &odabir);
    
    
    if (odabir == 1) {

        printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit >");
        float fahrenheit;
        float rezultatFC;
        scanf("%f" , &fahrenheit);

        rezultatFC = (fahrenheit - 32) * 5/9;

        printf("%f st. F = %f st. C\n", fahrenheit, rezultatFC);


    } 

    else {

        printf("Upisite temperaturu izrazenu u stupnjevima Celsius >");
        float celsius;
        float rezultatCF;
        scanf("%f" , &celsius);

        rezultatCF = (celsius * 9/5) + 32;
        printf("%f st. F = %f st. C\n", celsius, rezultatCF);

    }

    return 0;
}