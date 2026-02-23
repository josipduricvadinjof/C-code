
#include <stdio.h>
#include <ctype.h>


char *broji(char *niz, int *brVel, int *brMal)
{
    *brVel = 0;
    *brMal = 0;

    for (int i = 0; niz[i] != '\0'; i++) {

        if (islower(niz[i])) {
            (*brMal)++;
        }
        else if (isupper(niz[i])) {
            (*brVel)++;
        }
    }

    for (int i = 0; niz[i] != '\0'; i++) {

        if (niz[i] == 'a' || niz[i] == 'e' ||
            niz[i] == 'i' || niz[i] == 'o' ||
            niz[i] == 'u') {

            return &niz[i];   
        }
    }

   
}
