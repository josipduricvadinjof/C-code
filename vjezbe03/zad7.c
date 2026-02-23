#include<stdio.h>

int main(void){

    int x, y, z;

    printf("Upisite 3 cijela broja >");
    scanf("%d %d %d", &x, &y, &z);
    
    // C ne podrzava lancane usporedbe kao x > y > z nego treba bit 

    if (((x > y && y > z) || (z > y && y > x)) && (x != y && y != z && x != z)) {

        printf("Brojevi su poredani i razliciti.");
    }

    else {

        printf("Brojevi nisu poredani ili nisu razliciti.");
    }
        

    return 0;
}