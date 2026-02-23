#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int brojiSamoglasnike(const char *datoteka){

    int samoglasnici = 0;
    FILE *tokUlaz = fopen(datoteka, "r");
    if (tokUlaz == NULL) {
        printf("Nije uspjelo otvaranje datoteke");
        samoglasnici = -1;
        return samoglasnici;
    } else{
        printf("Broj samoglasnika u datoteci %s je", datoteka);
    }
    int c;
    while ((c = getc(tokUlaz)) != EOF) {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i'|| c == 'o'||c == 'u'){
            samoglasnici++;
        }
        
    }
    fclose(tokUlaz);
    return samoglasnici;
}

int main (void){
    printf("Upisite kompletan put do datoteke > ");
    char datoteka[60];
    fgets(datoteka, sizeof(datoteka), stdin);

    

    
   int brojsam;
   brojsam = brojiSamoglasnike(datoteka);

   printf("%d", brojsam);
   



    return 0;
}