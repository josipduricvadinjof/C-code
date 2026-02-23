#include <stdio.h>

int main (void){

    int n;

    do{
        printf("Unesite n: ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("Unesite clanove polja: ");

    int polje[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }


    printf("Modificirano polje: ");
    
    for(int i = 1; i < n; i++){
        int temp;

        if(polje[i] % 2 != 0 && polje[i - 1] % 2 == 0){
            temp = polje[i];
            polje[i] = polje[i - 1];
            polje[i - 1] = temp;

        }
    }

    int i;
    for (i = 0; i < n; i = i + 1) {
      printf("%d ", polje[i]);
   }

   return 0;

    
}