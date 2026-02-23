#include <stdio.h>
#include <ctype.h>

void prebrojiPojave(char *niz, char znak, int *rez){

    *rez = 0;

    znak = tolower(znak);
    
    for(int i = 0; *(niz + i) != '\0'; i++){
        if(znak == tolower(*(niz + i))){
            (*rez)++;
        }
    }
}