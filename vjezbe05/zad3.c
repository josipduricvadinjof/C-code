#include <stdio.h>

int main (void){

    int broj, suma=0;
    printf("Upisite brojeve:");

    while (broj % 3 == 0 || broj % 7 == 0)
    {
        scanf("%d", &broj);
        suma = suma + broj;
    
        
    }
    

    printf("Suma je: %d", suma);
            

    
    return 0;

  
    
} 