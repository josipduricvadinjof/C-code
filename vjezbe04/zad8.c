#include <stdio.h>

int main (void){

    int a, b, odabir, rez;
    printf("1. a + b\n2. a - b\n3. a * b\n4. a / b\n");
    printf("Upisite redni broj operacije >");
    scanf("%d", &odabir);
    printf("Upisite operande >");
    scanf("%d %d", &a, &b);

    switch (odabir) {

        case 1:
        rez = a + b;
        printf(" a + b = %d", rez);
        break;

        case 2:
        rez = a - b;
        printf(" a - b = %d", rez);
        break;

        case 3:
        rez = a * b;
        printf(" a * b = %d", rez);
        break;

        case 4:
        rez = a / b;
        printf(" a / b = %d", rez);
        break;




    }

    
       
 
 
return 0;

}
    