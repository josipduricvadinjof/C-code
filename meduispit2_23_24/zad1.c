#include <stdio.h>

int main (void){

    int n;
    do{

        printf("Unesite n > ");
        scanf("%d", &n);

    }while (n <= 2);

    printf("Unesite clanove niza > ");

    int polje[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }

    int d;
    d = polje[1] - polje[0];

    int aritmeticki = 1;

    for(int i = 1; i < n; i++){

        if(polje[i] - polje[i - 1] != d){
            aritmeticki = 0;
            break;
        }
    }

    
        if(aritmeticki == 1){

            printf("A > %d", d);

        } else{

            printf("NIJE");
        }
    

    
    


    return 0;
}