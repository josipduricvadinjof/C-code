#include <stdio.h>
#define BR_REDAKA 5
#define BR_STUPACA 7


int main (void){


    float polje[BR_REDAKA][BR_STUPACA] = {
    {[5] = 0.9f},
    {0.f},
    {31.1f, 32.2f, 33.3f, 34.2f},
    {1.f, 4.f, [6] = 7.7}};

    for(int i = 0; i < BR_REDAKA; i++){
        for(int j = 0; j < BR_STUPACA; j++){

            printf("%5.1f", polje[i][j]);

        }
        printf("\n");
    }


    return 0;
}