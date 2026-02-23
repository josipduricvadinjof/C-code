#include <stdio.h>

int main (void){

    int broj;
    printf("Unesite prirodni broj > ");
    scanf("%d", &broj);

    
    
    int polje[500];
    polje[0] = broj;
    int brojac = 0;
    printf("Rezultat: ");

    for(int i = 0; brojac < 3; i++){

        if (i > 0) 
        printf(", ");

        printf("%d", polje[i]);

        if(polje[i] % 2 == 0){
            polje[i + 1] = polje[i] / 2;
        } else {
            polje[i + 1] = 3*polje[i] + 1;
        }
        

       

        if(polje[i] == 1){
            brojac++;
        }
        
        
    }

    

    return 0;
}
