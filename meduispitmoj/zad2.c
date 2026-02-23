#include <stdio.h>
#define MAX_NIZ 100

int main (void){

    int niz[MAX_NIZ];
    int i = 0;
    int duljina = 0;

    printf("Upisite niz cijelih brojeva > ");

    do{
        scanf("%d", &niz[i]);
        i++;
        duljina++;

    }while(niz[i] != 0);

    int pocetni;
    int trenutnipocetni;
    
    int trenutnaduljina = 0;
    int maxduljina = 0;

    for(int i = 0; i < duljina; i++){
        
        if(niz[i] < niz[i + 1] && niz[i + 1] <= duljina){
            trenutnaduljina++;
            trenutnipocetni = i;

            if(trenutnaduljina > maxduljina){
                maxduljina = trenutnaduljina;
                pocetni = trenutnipocetni;
            }

        } else {

            trenutnaduljina = 0;

        }
        
    }

    printf("Najdulji strogorastuci podniz duljine %d zapoceo je na %d. clanu.", maxduljina, pocetni);
    

    


    for(int i = 0; i < duljina; i++){
        
    }

    


    return 0;
}