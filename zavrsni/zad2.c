#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dodajGenRecenicu(char *tekst, int brojRijeci, int duljRijeci){

    char *tmp = NULL;
    static int indeks = 0;
    static int znak = 97;

    for(int i = 0; i < brojRijeci; i++){

        tmp = realloc(tekst, (indeks + (duljRijeci)) * sizeof(char) );
        if(tmp == NULL){
            //printf("Greska: ne mogu realocirati memoriju.\n"); 
            free(tmp);
        }

        tekst = tmp;

        for(int j = 0; j < brojRijeci; j++){

            for(int i = 0; i < duljRijeci; i++){
    
                if(znak > 122){
                    znak = 97;
                }
    
                *(tekst + indeks) = znak;
                znak++;
                indeks++;
            }
            *(tekst + indeks) = ' ';
            indeks++;
        }



    }

    return &tekst[0];

}

void kontrolniIspis(char *tekst) {
   int duljinaTeksta;
   duljinaTeksta = strlen(tekst);
   if (duljinaTeksta <= 60) {
      // ispisi cijeli tekst
      printf("%s\n\n", tekst);
   } else {
      // tekst je dulji od 60 znakova, pa ce se ispisati samo pocetak i kraj teksta
      printf("%.20s ... %s\n\n", tekst, tekst + duljinaTeksta - 20);
   }
}

int main(void) {
   char *tekst = NULL;
   int duljRijeci, brojRijeci;
   do {
      printf("Upisite broj rijeci > ");
      scanf("%d", &brojRijeci);
      if (brojRijeci < 1) break;
      printf("Upisite duljinu rijeci > ");
      scanf("%d", &duljRijeci);
     
      dodajGenRecenicu(tekst,brojRijeci,duljRijeci);

      kontrolniIspis(tekst);
   } while (1);
   return 0;
}