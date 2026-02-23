#include <stdio.h>
#include <time.h>




int playRollTheDice (int noOfDiceSides, int diceStartNumber, int noOfRolls){

    int broj;
    int suma1;
    int suma2;

    for(int i = 0; i < noOfRolls; i++){
        broj = diceStartNumber*(rand() % noOfDiceSides);
        suma1 += broj;
    }

    for(int i = 0; i < noOfRolls; i++){
        broj = diceStartNumber*(rand() % noOfDiceSides);
        suma2 += broj;
    }

    if(suma1 > suma2){
        return 1;
    } else if(suma2 > suma1){
        return 2;
    } else {
        return 0;
    }

}