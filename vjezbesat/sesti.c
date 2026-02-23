#include <stdio.h>

int main(void) {

    int a, b, p;

    printf("Upisite 2 cijela broja > ");
    scanf("%d %d", &a, &b);

    p = a;
    a = b % 10;
    b = p % 10;

    printf("a = %d\nb = %d", a, b);

    
 return 0;
}