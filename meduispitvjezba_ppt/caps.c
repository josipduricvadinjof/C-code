#include <stdio.h>

int main (void){

    printf("Ulazni niz > ");
    char ulazniNiz[20];
    fgets(ulazniNiz, sizeof(ulazniNiz), stdin);

    int ulaznilen = 0;
    for (int i = 0; i < 20; i++) {
        if (ulazniNiz[i] == '\0')
            break;
        ulaznilen++;
    }

    for (int i = 0; i < ulaznilen; i++) {
        if (ulazniNiz[i] == '\n') {
            ulazniNiz[i] = '\0';
            ulaznilen--;
            break;
        }      
    }

    //niz mala slova

    char mNiz[20] = {0};

    int j = 0;
    for(int i = 0; i < ulaznilen; i++){
        if(ulazniNiz[i] >= 'a' && ulazniNiz[i] <= 'z'){
            mNiz[j] = ulazniNiz[i];
            j++;
        }
    }

    int mlen = 0;
    for (int i = 0; i < 20; i++) {
        if (mNiz[i] == '\0')
            break;
        mlen++;
    }
    mNiz[mlen] = '\0';

     printf("%d; %s", mlen, mNiz);



    //niz velika slova

    char vNiz[20] = {0};

    int k = 0;
    for(int i = 0; i < ulaznilen; i++){
        if((ulazniNiz[i] >= 'A' && ulazniNiz[i] <= 'Z') || (ulazniNiz[i] >= '0' && ulazniNiz[i] <= '9' )){
            vNiz[k] = ulazniNiz[i];
            k++;
        }
    }

    int vlen = 0;
    for (int i = 0; i < 20; i++) {
        if (vNiz[i] == '\0')
            break;
        vlen++;
    }

    vNiz[vlen] = '\0';

    printf("%d; %s", vlen, vNiz);








    return 0;
}