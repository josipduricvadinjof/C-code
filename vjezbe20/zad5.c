#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define MAX_REDKI 10
#define MAX_STUPCI 20



void gadjajPolje(int matrica[MAX_REDKI][MAX_STUPCI], int redci, int stupci, int brHitaca){

    int m, n;

    for(int i = 0; i < redci; i ++){
        for(int j = 0; j < stupci; j++){

            matrica[i][j] = 0;

        }
    }


    for(int i = 0; i < brHitaca; i ++){

        m = rand() % redci ;
        n = rand() % stupci ;
        
        matrica[m][n]++;
    }

  

}



int main (void){

    srand(time(NULL));

    int redci;
    int stupci;
    int brHitaca;
    printf("Upisite broj hitaca > ");
    scanf("%d", &brHitaca);

    redci = rand() % (10 - 5 + 1) + 5;
    stupci = rand() % (20 - 10 + 1) + 10;

    int matrica[redci][stupci];

    gadjajPolje(matrica,redci,stupci,brHitaca);

    for(int i = 0; i < redci; i ++){
        for(int j = 0; j < stupci; j++){

            printf("%4d" ,matrica[i][j] );

        }
    }

    return 0;
}