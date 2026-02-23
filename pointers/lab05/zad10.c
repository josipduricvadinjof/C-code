#include <stdio.h>

_Bool anagram(char *s1, char *s2, int *isti){


    int duljina1 = 0;
    int duljina2 = 0;
    *isti = 0;

    for(int i = 0; s1[i] != '\0'; i++){
        duljina1++;
    }

    for(int i = 0; s2 != '\0'; i++){
        duljina2++;
    }

    if(duljina1 == duljina2){

        for(int i = 0; s1 != '\0'; i++){
            if(*(s1 + i) == *(s2 + i)){
                (*isti)++;
            }
        }

        if(*isti == duljina1 && *isti == duljina2){
            return 1;
        }else{
            return 0;
        }

    }else{
        return 0;
    }
    

    

}


int main (void){

    char s1[20], s2[20];
    printf("Unesi dvije rijeci > \n");
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    int isti;

    _Bool anagrami = anagram(s1,s2,&isti);

    if(anagrami == 1){
        printf("Anagrami\n");
        printf("Broj podudaranja: %d", isti);

    }else{
        printf("Nisu anagrami\n");
        printf("Broj podudaranja: %d", isti);
    }



    return 0;
}











