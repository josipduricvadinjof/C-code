#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#define MAX_BROJ 100


void GenerirajTelefonskiBroj(char *broj){

    

    for(int i = 0; broj[i] != '\0'; i++){

        if(*(broj + i) == 'x'){
            *(broj + i) = rand() % ( 57 - 48 + 1) + 48;
        } else if(*(broj + i) != 'x'){
            *(broj + i) = '-';
        }

    }

}



int main()
{
  int seed;
  char broj[MAX_BROJ] = {'\0'};
  scanf("%d %s", &seed, broj);


  srand(seed);
  GenerirajTelefonskiBroj(broj);
  printf("%s", broj);


  return 0;
}


