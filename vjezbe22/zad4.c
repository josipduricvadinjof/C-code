#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main (void){

    char ch;
    int matrica[4][4];

    int i = 0;
    int j = 0;

    while(i < 4){

        
        if(scanf("%c", &ch) == 1 && !isspace(ch)){

            matrica[i][j] = ch;

            if(j == 4){
                j = 0;
                i++;
            }
        }



    }

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", matrica[i][j]);
        }
        printf("\n");
    }






    return 0;
}