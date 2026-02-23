#include <stdio.h>

struct vektor_s {
    int komp_i;
    int komp_j;
};

void SumaVektora(struct vektor_s *pok, int n, struct vektor_s *rez){

    int zbroji = 0;
    int zbrojj = 0;

    for(int i = 0; i < n; i++){
        zbroji += pok[i].komp_i;
        zbrojj += pok[i].komp_j;
    }

    rez->komp_i = zbroji;
    rez->komp_j = zbrojj;


}