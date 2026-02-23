#include <stdio.h>

int main (void){

    float suma = 0;
    int brojac = 1;

    while (brojac <= 1000){

        if (brojac % 2 == 0){
            suma -= 1.0 / brojac;
        }
        
        else {
            suma += 1.0 / brojac;
        }
        
        brojac++;


    }

    printf("Suma niza je: %f", suma);

    return 0;

  
    
}