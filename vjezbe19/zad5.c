#include <stdio.h>
#include <stdlib.h>


int main (void){



    char *rijec = NULL;
    char *tmp = NULL;
    int velicina = 0;

    tmp = realloc(rijec, (velicina + 1)*sizeof(char));
    if(tmp == NULL){
        return 1;
    }

    for(int i = 0; i < velicina; i++){
        scanf("%c", tmp[i]);
    }

    rijec = tmp;
    rijec[velicina] = tmp[velicina];
    velicina++;



    


    return 0;
}