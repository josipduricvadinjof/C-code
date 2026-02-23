//napišite program koji učitava prirodni broj n. Program treba ispisati s kojim je od sljedećih brojeva broj n djeljiv: 2, 3, 5 i 7.
#include <stdio.h>

int main (void){

    int broj;
    printf("Unesite broj > \n");
    scanf("%d", &broj);

    if (broj <= 0){

        printf("Unesen je pogresan broj!");

    } else {

        if (broj % 2 == 0)
        printf("Broj je djeljiv s brojem 2.\n");

        if (broj % 3 == 0)
        printf("Broj je djeljiv s brojem 3.\n");

        if (broj % 5 == 0)
        printf("Broj je djeljiv s brojem 5.\n");

        if (broj % 7 == 0)
        printf("Broj je djeljiv s brojem 7.\n");

        if (broj % 2 != 0 && broj % 3 != 0 && broj % 5 != 0 && broj % 7 !=0) {

            printf("Broj nije djeljiv s brojevima 2, 3, 5, 7.\n");
        }


    } 



    return 0;
}
