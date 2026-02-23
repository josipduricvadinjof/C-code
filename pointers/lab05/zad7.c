#include <stdio.h>

int najmanjiElement(int *niz, int n, int *koliko){

    *koliko = 1;
    int min = niz[0];
    for(int i = 1; i < n; i++){

        if(*(niz + i) < min){

            min = *(niz + i);
            *koliko = 1;
            
        
        } else if(*(niz + i) == min){
        
            (*koliko)++;
        }

    }

    return min;
    
    
}

int main (void){

    int n;
    printf("Unesi velicinu niza > ");
    scanf("%d", &n);

    int niz[n];
    printf("Unesite elemenate niza: ");
    for(int i = 0; i < n; i++){

        scanf("%d", &niz[i]);
    }

    int koliko, min;

    min = najmanjiElement(niz,n,&koliko);

    printf("Najmanji element %d s %d ponavljanja", min, koliko);
    


    return 0;
}