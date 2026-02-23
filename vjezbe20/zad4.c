#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


void izbaciNR(char *niz){

    int j = 0;

    for (int i = 0; niz[i] != '\0'; i++){
        if (niz[i] != '\n'){
            niz[j] = niz[i];
            j++;
        }
    }

    niz[j] = '\0';

}

void genText(char *niz, int duljinaGen, char *rezultat)
{
    int duljinaNiza = 0;

    /* duljina ulaznog niza */
    for (int i = 0; niz[i] != '\0'; i++)
        duljinaNiza++;

    for (int i = 0; i < duljinaGen; i++)
    {
        int index = rand() % duljinaNiza;
        rezultat[i] = niz[index];
    }

    rezultat[duljinaGen] = '\0';
}



int main (void){

    srand(time(NULL));

    printf("Upisite niz > ");
    char niz[60];
    fgets(niz, sizeof(niz), stdin);

    izbaciNR(niz);

    printf("Upisite duljinu generiranog niza > ");
    int duljinaGen;
    scanf("%d", &duljinaGen);

    char rezultat[100];

    genText(niz, duljinaGen, rezultat);
    printf("%s", rezultat);
    genText(niz, duljinaGen, rezultat);
    printf("%s", rezultat);
    genText(niz, duljinaGen, rezultat);
    printf("%s", rezultat);




    return 0;
}