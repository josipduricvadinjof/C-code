#include <stdio.h>

int main (void){

    printf("Broj studenata:");
    int broj;
    scanf("%d", &broj);

    struct Student_s{
        int maticnibroj;
        float meduispit;
        float zavrsni;
        float labos[8];
        float ukupno;
    };
  
   
    


    return 0;
}