#include <stdio.h>

void maks(int *p1, int *p2){

    int rezultat;
    
    if(*p1 > *p2){
        rezultat = *p1;
    }else{
        rezultat = *p2;
    }
    
    printf("Rezultat je %d", rezultat);
}

int main (void){
    
    int a, b, *p1, *p2;
    *p1 = &a;
    *p2 = &b;
    
    printf("Upisite dva cijela broja > ");
    scanf("%d %d", &a, &b);

    maks(p1, p2);



    return 0;
}

