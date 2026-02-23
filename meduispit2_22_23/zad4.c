#include <stdio.h>
#define MAX_NIZ 31

int main (void){

    char niz[MAX_NIZ];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);
    printf("\n");

    int len = 0;
    for (int i = 0; i < MAX_NIZ; i++) {
        if (niz[i] == '\0')
            break;
        len++;
    }

    for (int i = 0; i < len; i++) {
    if (niz[i] == '\n') {
        niz[i] = '\0';
        len--;
        break;      
    }
}
    

    int minind = 0;
    int maxind = 0;
    char minch = niz[0];
    char maxch = niz[0];

    
    for (int i = 1; i < len; i++) {

        if (niz[i] < minch) {
            minch = niz[i];
            minind = i;
        }
        else if (niz[i] == minch) {
            minind = i;
        }

         if (niz[i] > maxch) {
            maxch = niz[i];
            maxind = i;
        }
    }


    printf("imin = %d", minind);
    printf("imax = %d\n", maxind);

    for (int i = 0; i < len; i++) {
        if (niz[i] >= minind && niz[i] <= maxind)
            printf("%c", niz[i]);
    }









    return 0;
}