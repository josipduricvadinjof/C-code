#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>


bool capitalizeName(char *name){

    if(*(name + 0) == '\0'){
        return 0;
    } else {

        for(int i = 0; *(name + i) != '\0'; i++){
            if(i == 0){
                *(name + i) = toupper(*(name + i));
                i++;
            }
    
            if(*(name + i - 1) == ' ' || *(name + i - 1) == '-'){
                *(name + i) = toupper(*(name + i));
            } else {
                *(name + i) = tolower(*(name + i));
            }
    
        }
        return 1;
    }

 
}