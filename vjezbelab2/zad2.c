#include <stdio.h>

int main (void){

    //učitat broj n koji predstavlja broj elemenata polja
    int n;
    int polje[100];
    printf("Unesite duljinu polja: ");
    scanf("%d", &n);


    //učitat brojeve u polje
    printf("\nUnesite elemente polja:\n");

    for(int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }

    //svaki element zamjenit zbrojem tog elementa i svih elementa nakon njega
    for (int i = 0; i < n; i++) {    
    int suma = 0;                 
        for (int j = i; j < n; j++) { 
        suma = suma + polje[j];         
        }
        polje[i] = suma;              
    }
    //ispisat polje
    printf("Izracunato polje: ");
    for (int k = 0; k < n; k++){
        printf("%d ", polje[k]);
    }



    return 0;
}