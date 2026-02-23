#include <stdio.h>
#define PRAG 80


struct rezultat {
   char ime[15 + 1];
   int bodovi;
};

int najstudenti(char *txtdat, char *bindat){
    FILE *fb = fopen(bindat, "w+b");
    FILE *ft = fopen(txtdat, "r");
    if(ft == NULL || fb == NULL){
        return -1;
    }

    struct rezultat student;
    int prepisani = 0;
   

    while(fscanf(ft, "%15s %d", student.ime, &student.bodovi) == 2){
        if(student.bodovi >= PRAG){

            fwrite(&student, sizeof(struct rezultat), 1, fb);
            
            prepisani++;
        }
    }




    
    
    
    fclose(fb);
    fclose(ft);
    return prepisani;

}

