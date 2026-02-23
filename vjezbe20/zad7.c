#include <stdio.h>
#include <stdlib.h>
#include <time.h>

static int count = 0;

int dajSljedecuKuglicu(void){

    
    int loptica;
   
    loptica = rand() % (39 - 1 + 1) + 1;
    count++;

    if(count > 7){
        loptica = -1;
    }

    return loptica;

}

void resetirajBubanj(void){

    
    count = 0;

}


int main (void){
    srand((unsigned int)time(NULL));

    for(int i = 0; i < 10; i++){
        printf(" %d. izvlacenje: ", i + 1);
        for(int j = 0; j < 7; j++){
            int kuglica = dajSljedecuKuglicu();
            printf(" %d", kuglica);
            
        }
        resetirajBubanj();
       printf("\n");
    }


    return 0;
}