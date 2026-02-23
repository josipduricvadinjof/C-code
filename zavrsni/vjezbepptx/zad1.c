#include <stdio.h>
#include <string.h>

int izbaci(char *niz, char *podniz)
{
    char *pozicija = strstr(niz, podniz);

    if (pozicija == NULL)
        return 0;

    strcpy(pozicija, pozicija + strlen(podniz));
    return 1;
}





int main(void){

    printf("Ulaz > ");
    char ulaz[100];
    fgets(ulaz, sizeof(ulaz), stdin);

    char *p = strchr(ulaz, '\n');
    if (p) *p = '\0';


    printf("Uzorak > ");
    char uzorak[10];
    fgets(uzorak, sizeof(uzorak), stdin);

    char *p = strchr(uzorak, '\n');
    if (p) *p = '\0';


    printf("Ulaz bez uzorak > ");









    return 0;
}