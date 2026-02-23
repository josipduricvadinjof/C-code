#include <stdio.h>

int main(void) {

    FILE *f = fopen("mjerenja.txt", "r");

    char red[512];

    while (fgets(red, sizeof(red), f) != NULL) {

        int dan, broj;
        int sat;
        double temp;
        double suma = 0.0;

        char *p = red;

        /* čitanje dana i broja mjerenja */
        sscanf(p, "#%d#%d#", &dan, &broj);

        /* pomak pokazivača iz#ddd#NN# */
        p = p + 1;
        while (*p != '#') p++; p++;
        while (*p != '#') p++; p++;

        /* čitanje mjerenja */
        for (int i = 0; i < broj; i++) {
            sscanf(p, "%d#%lf#", &sat, &temp);
            suma += temp;

            /* preskoči sat */
            while (*p != '#') p++; p++;
            /* preskoči temperaturu */
            while (*p != '#') p++; p++;
        }

        printf("Dan=%3d, Broj mjerenja=%2d, Prosjek=%7.2f\n",
               dan, broj, suma / broj);
    }

    fclose(f);
    return 0;
}
