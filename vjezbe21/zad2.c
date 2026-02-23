#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>



int main (void){

    int znamenka = 0;
    int slovo = 0;
    int ostalo = 0;

    for(int i = 0; i < 1000; i++){
        srand((unsigned int)time(NULL));
        int ascii = rand() % (126 - 32 + 1) + 32;

        if(isalpha(ascii)){
            slovo++;
        } else if(isdigit(ascii)){
            znamenka++;
        } else{
            ostalo++;
        }

    }

    printf("Slova   : %d", slovo);
    printf("Znamenka: %d", znamenka);
    printf("Ostalo  : %d", ostalo);




    return 0;
}