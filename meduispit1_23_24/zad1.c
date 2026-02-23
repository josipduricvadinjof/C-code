#include <stdio.h>

int main(void) {

    int n;
    do {
        printf("Unesite n > ");
        scanf("%d", &n);
    } while (n < 2);

    printf("Unesite clanove niza > ");
    int niz[50];

    for(int i = 0; i < n; i++){
        scanf("%d", &niz[i]);
    }
    

    int razlika;
    razlika = niz[1] - niz[0];

    int i = 1;
        
    if(niz[i] - niz[i - 1] == razlika){
        printf("A > %d", razlika);
            
    } else {
        printf("NIJE");
    }


    
    return 0;
}