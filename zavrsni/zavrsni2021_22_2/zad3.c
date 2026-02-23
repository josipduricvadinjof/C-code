#include <stdio.h>
#include <time.h>
#include <math.h>



void igra(int seed, int brojBacanja, int *pobjednik, int *razlika){

    int zbroj1 = 0;
    int zbroj2 = 0;

    int broj;

    srand(time(seed));

    for(int i = 0; i < brojBacanja; i++){

        broj = rand() % 6;
        zbroj1 += broj;

    }

    for(int i = 0; i < brojBacanja; i++){

        broj = rand() % 6;
        zbroj2 += broj;

    }

    if(zbroj1 > zbroj2){
        *pobjednik = 1;
    } else if (zbroj1 < zbroj2){
        *pobjednik = 2;
    } else{
        *pobjednik = 0;
    }

    *razlika = abs(zbroj1 - zbroj2);






}