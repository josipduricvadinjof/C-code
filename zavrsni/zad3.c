#include <stdio.h>
#include <string.h>
#include <ctype.h>

void pretvoriIzraz(char *izraz, char *rezultat){

    int j = 0;

    for(int i = 0; *(izraz + i) != '\0'; i++){

        if(isalnum((unsigned char)*(izraz + i)) != 0){
            *(rezultat + j) = *(izraz + i);
            j++;
        }else if(*(izraz + i) == '*'){

            *(rezultat + j) = ' ';
            j++;
            *(rezultat + j) = 'p';
            j++;
            *(rezultat + j) = 'u';
            j++;
            *(rezultat + j) = 't';
            j++;
            *(rezultat + j) = 'a';
            j++;
            *(rezultat + j) = ' ';
            j++;

        }else if(*(izraz + i) == '+'){

            *(rezultat + j) = ' ';
            j++;
            *(rezultat + j) = 'p';
            j++;
            *(rezultat + j) = 'l';
            j++;
            *(rezultat + j) = 'u';
            j++;
            *(rezultat + j) = 's';
            j++;
            *(rezultat + j) = ' ';
            j++;

        }else if(*(izraz + i) == '-'){

            *(rezultat + j) = ' ';
            j++;
            *(rezultat + j) = 'm';
            j++;
            *(rezultat + j) = 'i';
            j++;
            *(rezultat + j) = 'n';
            j++;
            *(rezultat + j) = 'u';
            j++;
            *(rezultat + j) = 's';
            j++;
            *(rezultat + j) = ' ';
            j++;

        }else if(*(izraz + i) == '/'){

            *(rezultat + j) = ' ';
            j++;
            *(rezultat + j) = 'p';
            j++;
            *(rezultat + j) = 'o';
            j++;
            *(rezultat + j) = 'd';
            j++;
            *(rezultat + j) = 'i';
            j++;
            *(rezultat + j) = 'j';
            j++;
            *(rezultat + j) = 'e';
            j++;
            *(rezultat + j) = 'l';
            j++;
            *(rezultat + j) = 'j';
            j++;
            *(rezultat + j) = 'e';
            j++;
            *(rezultat + j) = 'n';
            j++;
            *(rezultat + j) = 'o';
            j++;
            *(rezultat + j) = ' ';
            j++;
            *(rezultat + j) = 's';
            j++;
            *(rezultat + j) = ' ';
            j++;

        }
    }

}


int main() {
    char izraz[200+1];
    char rezultat[1000+1];
    
    printf("Unesite izraz> ");
    scanf("%s", izraz);
    
    pretvoriIzraz(izraz,rezultat);
    
    printf("Izlaz: %s\n", rezultat);
    
    return 0;
}











