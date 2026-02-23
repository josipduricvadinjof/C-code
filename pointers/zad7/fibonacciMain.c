#include <stdio.h>
#include "fibonacci.h"

int main(void) {
    int n;

    do {
        printf("Upisite broj Fibonaccijevih brojeva > ");
        if (scanf("%d", &n) != 1) break; 
        if (n <= 0) break; 

        resetFibonacci(); 
        for (int i = 0; i < n; i++) {
            printf("%d\n", getNextFibonacci());
        }

    } while (1);

    return 0;
}
