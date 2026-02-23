#include <stdio.h>

void negativci(int *polje, int *poljen, int n) {

    int j = 0;
    

    for(int i = 0; i < n; i++){
        if(*(polje + i) < 0){
            *(poljen + j) = *(polje + i);
            j++;
            
        }
    }

    for(int i = 0; i < j; i++){
        
        printf("%d ", *(poljen + i));
    }

    

    
}

int main(void) {

    int n;

    printf("Upisite broj clanova > ");
    scanf("%d", &n);

    int polje[n];

    printf("Upisite clanove > ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &polje[i]);
    }
    int poljen[n];

    negativci(polje, poljen, n);

    

    return 0;
}
