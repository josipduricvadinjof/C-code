#include <stdio.h>

int main (void){

    int p;
    int polje[10];

    printf("Upisite 10 pozitivnih brojeva > ");
    for(int i = 0; i < 10; i++){

        scanf("%d", &polje[i]);

    }

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (polje[j] % 10 > polje[j + 1] % 10) {
                p = polje[j];
                polje[j] = polje[j + 1];
                polje[j + 1] = p;
            }
        }
    }

    for(int i = 0; i < 10; i++){
        printf("%d", polje[i]);
    }

    

    



    return 0;
}