#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void inicijalizirajPolje(char *mat, int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            *(mat + j*n + i) = '.';
        }
    }
}

void ispisiPolje(char *mat, int n){

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%2c", *(mat + j*n + i) );
        }
    }
}

void crtajPutanju(char *mat, int n, char znak){

    srand(time(NULL)); // u main stavit

    *(mat + 0*n + 0) = znak;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
            int put = rand() % 2;
            if(put == 1){
                j++;
                *(mat + j*n + i) = znak;

            } 
            if(put = 0){
                i++;
                *(mat + j*n + i) = znak;


            }

        }
    }

}