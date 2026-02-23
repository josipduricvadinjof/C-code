#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

struct person_s {
  int code;
  char name[128];
  float salary;
};

bool capitalizeName(struct person_s *person){

    if(strlen(person->name) == 0){
        return false;
    }
    for(int i = 0; person->name[i] != '\0'; i++ ){

        
        if( i==0  ){
            person->name[i] = toupper(person->name[i]);
        } else if(person->name[i-1] == ' ' || person->name[i-1] == '-'){
            person->name[i] = toupper(person->name[i]);
        } else {
            person->name[i] = tolower(person->name[i]);
        }
        
        
    }
    
    return true;
}
