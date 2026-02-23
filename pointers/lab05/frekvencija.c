#include <stdio.h>

int odrediIndNajMClana(int *frekvencije, int n){

    int min = *frekvencije;
    int minind = 0;

    for(int i = 1; i < n; i++){
        if(*(frekvencije + i) < min){
            min = *(frekvencije + i);
            minind = i;
        }
    }
    return minind;

}

int odrediFrek(int *matrica, int m, int n, int *frekvencije){

    int frekv = 0;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < m * n; j++){
            if(*(matrica + j) == i){
                frekv++;
            }
        }
        *(frekvencije + i) = frekv;
        frekv = 0;
    }

    int rarest = odrediIndNajMClan(&frekvencije[0], 3);
    frekv = 0;


}