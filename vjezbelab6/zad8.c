#include <stdio.h>

void duplicirajSamoglasnike(char *ulaz, char *izlaz){



    for(int i = 0; *(ulaz + i) != '\0'; i++){

        int j = i + 1;
        *(izlaz + j) = *(ulaz + i);

        
        if(*(ulaz + i) == 'a' || *(ulaz + i) == 'A' ||
            *(ulaz + i) == 'e' || *(ulaz + i) == 'E' ||
            *(ulaz + i) == 'i' || *(ulaz + i) == 'I' ||
            *(ulaz + i) == 'o' || *(ulaz + i) == 'O' ||
            *(ulaz + i) == 'u' || *(ulaz + i) == 'U'){

                *(izlaz + j) = *(ulaz + i);
                j++;
        } 

            *(izlaz + i) = '\0';
    }



}