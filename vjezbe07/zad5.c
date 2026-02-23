#include <stdio.h>
#define BR_REDAKA 11
#define BR_STUPACA 11

int main (void){

    int polje[BR_REDAKA][BR_STUPACA];

     for (int i = 0; i < BR_REDAKA; i++) {
        for (int j = 0; j < BR_STUPACA; j++) {
            if (i == j || i == 0 || i == 10 || j == 10 || i + j == 10 || j == 0){
                polje[i][j] = 1;
            } else {
                polje[i][j] = 8;
            }
        }
    }

    printf("Generirana kvadratna matrica:\n");

    for (int i = 0; i < BR_REDAKA; i++) {
        for (int j = 0; j < BR_STUPACA; j++) {
            printf(" %d", polje[i][j]);
        }
        printf("\n");
    }





    return 0;
}