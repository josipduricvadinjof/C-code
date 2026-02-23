#include <stdio.h>
#include <string.h>



int brojPodnizova(const char *niz1, const char *niz2) {

    int broj = 0;
    const char *p = niz1;

    while ((p = strstr(p, niz2)) != NULL) {
        broj++;
        p++;   // pomak za 1 znak (dozvoljava preklapanje) //p += strlen(niz2) za bez preklapanja

    }

    return broj;
}



int main (void){

    printf("Upisite 1. niz > ");
    char niz1[60];
    fgets(niz1, sizeof(niz1), stdin);

    for (int i = 0; niz1[i] != '\0'; i++) {
        if (niz1[i] == '\n') {
            niz1[i] = '\0';
            break;
        }
    }

    printf("Upisite 2. niz > ");
    char niz2[60];
    fgets(niz2, sizeof(niz2), stdin);

    for (int i = 0; niz2[i] != '\0'; i++) {
        if (niz2[i] == '\n') {
            niz2[i] = '\0';
            break;
        }
    }

   

    printf("2. niz se u 1. nizu pojavljuje %d puta", brojPodnizova(niz1, niz2));






    return 0;
}











