#include <stdio.h>

int main (void){

    int n;
    do{
        printf("Unesite n > ");
        scanf("%d", &n);
    }while(n <= 0);

    int a[n];
    for(int i = 0; i < n; i++){
       scanf("%d", &a[i]);
    }

    

    int temp;
    for(int i = 0; i < n; i++){
       
         if(i % 2 == 0 && i != n){
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }


    int i;
    for (i = 0; i < n; i = i + 1) {
      printf("%d ", a[i]);
   }
   


    return 0;
}