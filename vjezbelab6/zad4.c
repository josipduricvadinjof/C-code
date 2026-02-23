#include <stdio.h>

void obrni (char *src, char *dst){

    int duljina = 0;
    for(int i = 0; *(src + i) != '\0'; i++){
        duljina++;
    }

    
    for(int i = 0; i < duljina; i++){
        
        *(dst + i) = *(src + duljina - i - 1);
        
    }

     *(dst + duljina) = '\0';



}

