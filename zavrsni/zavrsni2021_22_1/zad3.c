#include <stdio.h>
#include <ctype.h>
#include <string.h>



void generirajLozinku (unsigned int sjeme, const char *znakoviZaLozinku, int duljLoz, char *lozinka){

    srand(sjeme);
    int indeksznaka;

    int DuljinaZnakova = strlen(znakoviZaLozinku);

    for(int i = 0; i < duljLoz; i++){

        indeksznaka = rand() % DuljinaZnakova;

        *(lozinka + i) = *(znakoviZaLozinku + indeksznaka);

    }

    lozinka[duljLoz] = '\0';


}