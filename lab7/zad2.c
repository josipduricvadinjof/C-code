#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct pravokutnik{
    int x1;
    int y1;
    int x2;
    int y2;

};




void nadiNajveciOpseg(int n, struct pravokutnik* pravokutnici){

    int maxopseg = 0;
    
    for(int i = 0; i < n; i++){

        int trenutniOpseg = 2* abs((((pravokutnici + i)->x2) - ((pravokutnici + i)->x1)) + (((pravokutnici + i)->y2) - ((pravokutnici + i)->y1)));

        if(trenutniOpseg > maxopseg){
            maxopseg = trenutniOpseg;
            rjesenje = pravokutnici[i];
        }

    }



}