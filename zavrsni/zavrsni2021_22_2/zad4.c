#include <stdio.h>
#include <stdlib.h>

struct record {
    int code;
    int x;
    int y;
};




_Bool txt2bin(char *inputFile, char *outputFile){

    FILE *ft = fopen(inputFile, "r");
    FILE *fb = fopen(outputFile, "w+b");
    if(ft == NULL || fb == NULL){
        return 0;
    }

    struct record tocka;

    while(fscanf(ft, "%2d%3d%3d", &tocka.code, &tocka.x, &tocka.y) == 3){

        fseek(fb, (tocka.code - 1) * sizeof(struct record), SEEK_SET);
        fwrite(&tocka, sizeof(struct record), 1, fb);
    }

    
    fclose(ft);
    fclose(fb);
    return 1;

}