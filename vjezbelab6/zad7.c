#include <stdio.h>

struct person_s {
  int code;
  char name[128];
  float salary;
};

void delCharFromName(struct person_s *s, char c){

    int j = 0;

    for(int i = 0; *((*s).name + i) != '\0'; i++ ){

        if(*((*s).name + i) != c){

            *((*s).name + j) = *((*s).name + i);
            j++;

        }

    }
     *((*s).name + j) = '\0';
   

}