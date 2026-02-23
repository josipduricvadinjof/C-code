//S tipkovnice učitati troznamenkasti prirodni broj. Na zaslon ispisati sumu parnih znamenki učitanog broja umanjenu za sumu neparnih znamenki.
#include <stdio.h>

int main (void){

    int broj, znamenka, sumaparni = 0, sumaneparni = 0, suma;

    printf("Upisite troznamenkasti prirodni broj > ");
    scanf("%d", &broj);


    while (broj > 0){

        while (broj > 0) {
            znamenka = broj % 10;

            if (znamenka % 2 == 0)
            sumaparni += znamenka;
            else
            sumaneparni += znamenka;

            broj = broj / 10;

        }

    }

    suma = sumaparni - sumaneparni;

    printf("Rezultat: %d", suma);





    return 0;
}