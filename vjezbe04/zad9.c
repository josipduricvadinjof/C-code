#include <stdio.h>

int main (void){

    int a, sumiranih, suma;
    a = 11, sumiranih = 0, suma = 0;

    while (sumiranih < 1000){
        if (a > 10 && a % 7 == 0 && ((a % 10)+ ((a % 10) + a % 10)) == 5){

            sumiranih = sumiranih + 1;
            suma = suma + a;

        }
            
        a = a + 1;




    }

    printf("Suma je: %d", suma);
 
return 0;

}
    