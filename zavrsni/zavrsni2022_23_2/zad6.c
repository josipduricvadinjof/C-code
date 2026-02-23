#include <stdio.h>

struct artikli{
    int sifra;
    float cijena;

};


int brojJednakih(char *trgovina1, char *trgovina2){
    FILE *ftr1 = fopen(trgovina1, "r");
    FILE *ftr2 = fopen(trgovina2, "r");

    if (ftr1 == NULL || ftr2 == NULL) {
        return -1;
    }

    struct artikli artiklitr1;
    struct artikli artiklitr2;
    int counter=0;
    

    while(fscanf(ftr1, "%d#%f" , &artiklitr1.sifra, &artiklitr1.cijena) == 2){
        while(fscanf(ftr2, "%d#%f" , &artiklitr2.sifra, &artiklitr2.cijena) == 2){

            if(artiklitr1.sifra == artiklitr2.sifra){
                counter++;
                break;
            }
            
        }
        fseek(ftr2, 0L, SEEK_SET);
    }
    fclose(ftr1);
    fclose(ftr2);

    return counter;



}