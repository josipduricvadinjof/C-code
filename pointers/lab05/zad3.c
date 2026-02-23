#include <stdio.h>

void getMinMax(int *polje, int n, int *min, int*max){

    *min = polje[0];
    *max = polje[0];


    for(int i = 0; i < n; i++){

        if(*(polje + i) >= *max){
            *max = *(polje + i);
        }  
        
    }

    for(int i = 0; i < n; i++){

        if(*(polje + i) <= *min ){
            *min = *(polje + i);
        }  
        
    }


}

int main (void){

    int n;
    printf("Unesite velicinu polja > ");
    scanf("%d", &n);

    int polje[n];
    printf("Unesite %d elemenata u polju: ", n);
    for(int i = 0; i < n; i++){

        scanf("%d", &polje[i]);
    }
    int min, max;

    getMinMax(polje,n,&min,&max);

    printf("Najmanji element u polju: %d", min);
    printf("Najveci element u polju: %d", max);










    return 0;
}