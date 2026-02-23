#include <stdio.h>

int main (void){


    int broj, medo, tuna, slavuj;
    printf("Upisite iznos u kn > ");
    scanf("%d", &broj);


    medo = broj / 5;
    broj = broj % 5;

    tuna = broj / 2;
    broj = broj % 2;

    slavuj = broj;

    printf("Kovanice:\n");
    if (medo > 0)
        printf("%d x 5 kn\n", medo);
    if (tuna > 0)
        printf("%d x 2 kn\n", tuna);
    if (slavuj > 0)
        printf("%d x 1 kn\n", slavuj);








    return 0;
}