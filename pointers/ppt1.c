#include <stdio.h>

int main (void){

    float broj;
    void *p1 = &broj;

    printf("Unesite broj: ");
    scanf("%f", &broj);

    printf("%d\n", (int *)p1);
    printf("%p", (float *)p1);



    return 0;
}