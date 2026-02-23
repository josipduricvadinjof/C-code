#include <stdio.h>
#define MAX_NIZ1 51
#define MAX_NIZ2 21

int main (void){

    printf("Upisite 1. niz > ");
    char niz[MAX_NIZ1];
    fgets(niz, sizeof(niz), stdin);

    printf("Upisite 2. niz > ");
    char niz2[MAX_NIZ2];
    fgets(niz2, sizeof(niz2), stdin);

    

    for(int i = 0; niz2[i] != '\0'; i++){
        for(int j = 0; niz[j] != '\0'; j++){
            if(niz[j] == niz2[i] && niz[j] >= 'A' && niz[j] <= 'Z'){
                niz[j] = niz[j] + 32;
            }
        }

    }

    
    printf("Novi 1. niz = %s\n", niz);





    return 0;
}