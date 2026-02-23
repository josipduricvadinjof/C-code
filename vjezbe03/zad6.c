#include<stdio.h>

int main(void){

    int x, y;

    printf("Upisite x i y >");
    scanf("%d %d", &x, &y);
    

    if ( ((x >= 5 && x <= 20) || (y >= 5 && y <= 20)) && (x < y) ) {

        printf("Istina je.");
    }

    else {

        printf("Nije istina.");
    }


    return 0;
}