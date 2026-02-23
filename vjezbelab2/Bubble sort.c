#include <stdio.h>

int main (void){

    //S tipkovnice učitava cijeli broj n – broj članova polja.
    int n;
    printf("Unesite broj clanova polja: ");
    scanf("%d", &n);

    //Zatim učitava n cijelih brojeva u polje.
    printf("Unesite clanove polja velicine %d:\n", n);
    int polje[100];
    for(int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }
    //Sortira elemente polja uzlazno (od najmanjeg prema najvećem) koristeći Bubble sort algoritam.
    int  p;
    for (int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){

            if(polje[j] > polje[j + 1]){
                p = polje[j];
                polje [j] = polje [j + 1];
                polje[j + 1] = p;
            }

        }

    }

    //Na kraju ispisuje sortirano polje.
    printf("Sortirano polje je: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", polje[i]);
    }




    return 0;
}
