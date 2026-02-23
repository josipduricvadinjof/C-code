#include <stdio.h>
#include <math.h>

int main (void){

    int broj, okt, dekadski = 0, i = 0;
    scanf("%d",&broj);
    
    if (broj < 1 || broj > 10){

        printf("Broj znamenki je neispravan");
    } else {

        while (i < broj)
        {
           
           scanf("%d", &okt);
           i = i + 1; 
           dekadski = dekadski * 8 + okt; 
        }
        

        printf("%d", dekadski);
    }


    return 0;

  
    
} 