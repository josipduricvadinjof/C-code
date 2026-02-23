//S tipkovnice učitati prirodan broj koji predstavlja broj dana (uneseni broj nije potrebno provjeravati). Potrebno je pretvoriti zadani broj dana u odgovarajući broj godina, tjedana i dana. Zanemarite postojanje prijestupnih godina (pretpostavite da svaka godina ima 365 dana).

#include <stdio.h>

int main (void){


    int broj, dani, godina, tjedni;
    printf("Unesite broj dana >");
    scanf("%d", &broj);


    godina = broj / 365;
    broj = broj % 365;

    tjedni = broj / 7;
    broj = broj % 7;

    dani = broj;

   printf("Unos odgovara razdoblju od %d godina %d tjedana i %d dana", godina, tjedni, dani);







    return 0;
}