#include <stdio.h>
#include <stdlib.h>



void odrediMjesecIDanUskrsa(int godina, int *mjesec, int *dan){

    int X, Y;
    if(godina <= 1699){
        X = 22;
        Y = 2;

    } else if (godina >= 1700 && godina <= 1799){
        X = 23;
        Y = 3;
    } else if (godina >= 1800 && godina <= 1899){
        X = 23;
        Y = 4;
    } else if (godina >= 1900 && godina <= 2099){
        X = 24;
        Y = 5;
    }

    int A = godina % 19;
    int B = godina % 4;
    int C = godina % 7;
    int D = (A * 19 + X) % 30;
    int E = (2 * B + 4 * C + 6 * D + Y) % 7;

    *dan = (22 + D+ E);
    *mjesec = 3;

    if(*dan > 31){
        *dan = (D + E -9);
        *mjesec = 4;
    }

}















int main(void)
{
    int godina;
    int mjesec, dan;

    printf("Unesite godinu: ");
    scanf("%d", &godina);

    odrediMjesecIDanUskrsa(godina, &mjesec, &dan);

    printf("Uskrs %d. godine je %d.%d.\n", godina, dan, mjesec);

    return 0;
}
