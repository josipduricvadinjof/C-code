#include <stdio.h>
#include <math.h>

int main (void){

    int broj, bin, dekadski = 0, i = 0;
    scanf("%d",&broj);
    
    if (broj < 1 || broj > 31){

        printf("Broj znamenki je neispravan");
    } else {

        while (i < broj)
        {
           
           scanf("%d", &bin);
           i = i + 1; 
           dekadski = dekadski * 2 + bin; 
        }
        

        printf("%d", dekadski);
    }


    return 0;

  
    
} 