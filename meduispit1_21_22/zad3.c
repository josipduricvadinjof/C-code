#include <stdio.h>
#define MAX_NIZ 11

int main (void){

    char niz[MAX_NIZ];
    printf("Unesite niz znakova > ");
    fgets(niz, sizeof(niz), stdin);

    // makni \n
    for (int k = 0; k < MAX_NIZ; k++) {
        if (niz[k] == '\n') {
            niz[k] = '\0';
            break;
        }
    }

    for(int i = 0; niz[i] != '\0'; i++){

        // prvo slovo u nizu
        if(i == 0){
            if(niz[i] >= 'a' && niz[i] <= 'z')
                niz[i] -= 32;
        }

        // prvo slovo nakon razmaka
        if(i > 0 && niz[i - 1] == ' '){
            if(niz[i] >= 'a' && niz[i] <= 'z')
                niz[i] -= 32;
        }

        // zadnje slovo prije razmaka
        if(niz[i + 1] == ' '){
            if(niz[i] >= 'a' && niz[i] <= 'z')
                niz[i] -= 32;
        }

        // zadnje slovo prije kraja stringa
        if(niz[i + 1] == '\0'){
            if(niz[i] >= 'a' && niz[i] <= 'z')
                niz[i] -= 32;
        }
    }

    printf("Rezultat: %s\n", niz);

    return 0;
}
