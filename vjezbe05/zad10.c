#include <stdio.h>

int main (void) {

    int broj, pozitivni = 0, negativni = 0, najmanji = 0, najveci =0;
    printf("Upisite brojeve >");


    while (broj != 0){

        scanf("%d", &broj);

        if(broj > 0 && broj > najveci){
            
            
            najveci = broj;
            pozitivni++;

            
        } else {

            if (broj < najmanji){

                najmanji = broj;
                negativni++;
            }

        }
    }
    
    if (negativni == 0){
        printf("Nije upisan niti jedan negativni broj\n");
    } else{

        printf("Najmanji negativan = %d \n", najmanji);
    
    }
    
    if (pozitivni == 0){

        printf("Nije upisan niti jedan pozitivni broj\n");


    } else {


        printf("Najveci pozitivni je = %d", najveci);

    }

    


    return 0;

}

