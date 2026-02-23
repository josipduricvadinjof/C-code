#include <stdio.h>
#define BR_RACUNA 1001

int main (void){

    printf("Upisite broj uplata > ");
    int n;
    scanf("%d", &n);

    printf("Upisujte uplate >\n");

    int racuni[BR_RACUNA]={0};
    int iznos;
    int brojr;

    for(int i = 0; i < n; i++){
        scanf("%d %d", &brojr, &iznos);
        racuni[brojr - 100000] += iznos;
    }

    int max_suma = racuni[0];
    for(int i = 0; i < BR_RACUNA; i++){
        
        if(max_suma < racuni[i]){
            max_suma = racuni[i];
        }
    }


    printf("Najveca suma:%8d kn\n", max_suma);






    return 0;
}