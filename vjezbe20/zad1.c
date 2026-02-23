#include <stdio.h>
#include <stdlib.h>

int main(void){
    printf("Upisite n > ");
    int n;
    scanf("%d", &n);

    while(n < 3 || n > 60){

        printf("Neispravan unos!");
        scanf("%d", &n);

    }

    srand((unsigned int)time(NULL));
    for(int i = 0; i < n; i++){
        char slovo = rand() + 'A';
        printf("%c", slovo);
    }
    
    
}