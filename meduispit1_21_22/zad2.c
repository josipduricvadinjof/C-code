#include <stdio.h>

int main (void){

    int n;

    do{
        printf("Unesite duljinu polja > ");
        scanf("%d", &n);
    } while (n < 5 || n > 10);

    int polje[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }

    // postavimo početne vrijednosti
    int najmanji = polje[0];
    int najveci = polje[0];
    int indMin = 0;
    int indMax = 0;

    // pronađi PRVI minimum i PRVI maksimum
    for(int i = 1; i < n; i++){
        if(polje[i] > najveci){
            najveci = polje[i];
            indMax = i;
        }
        if(polje[i] < najmanji){
            najmanji = polje[i];
            indMin = i;
        }
    }

    // zamijeni ta dva elementa
    int temp = polje[indMin];
    polje[indMin] = polje[indMax];
    polje[indMax] = temp;

    // ispis rezultata
    printf("Rezultat:");
    for(int i = 0; i < n; i++){
        printf("%d", polje[i]);
      
    }

    return 0;
}
