#include <stdio.h>
#include "fibonacci.h"


static int prethodni = 0;
static int trenutni = 1;
static int prvi_poziv = 1;

int getNextFibonacci(void) {

    if (prvi_poziv) {
        prvi_poziv = 0;
        return 1; 
    }

    int sljedeci = prethodni + trenutni;
    prethodni = trenutni;
    trenutni = sljedeci;

    return trenutni;
}


void resetFibonacci(void) {

    prethodni = 0;
    trenutni = 1;
    prvi_poziv = 1;
}

