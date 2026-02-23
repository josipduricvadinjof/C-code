#include <stdio.h>

#define PRVI_STAN 10
#define ZADNJI_STAN 99
#define BROJ_STANOVA (ZADNJI_STAN - PRVI_STAN + 1)

typedef struct {
    int idStana;
    int stanaraUStanu;
} stan_t;


_Bool stvoriStanariUStanu(char* txtdat, char* binDat){

    FILE *ft = fopen(txtdat, "r");
    FILE *fb = fopen(binDat, "w+b");

    char prezime[20];
    char ime[20];
    int IDstana = 0;

    stan_t stan[99];
    for(int i = PRVI_STAN; i < ZADNJI_STAN; i++){
        stan[i].idStana = 0;
        stan[i].stanaraUStanu = 0;;
    }

    if (fb == NULL || ft == NULL) {
        fclose(fb);
        fclose(ft);
        
        return 0;
    } else if(strncmp(txtdat, 'nemaTakveDatoteke.txt')){

        return 0;

    }else{

        while(fscanf(ft, "%20s;%20s;%d", prezime, ime, &IDstana) == 3){

            stan[IDstana].idStana = IDstana - 10;
            stan[IDstana].stanaraUStanu++;
            
        }



        return 1;
    }



}

int main(void) {
    char txtDat[50+1], binDat[50+1];
    FILE *fb;
    stan_t stan;

    printf("Naziv txt datoteke > ");
    scanf("%s", txtDat);

    printf("Naziv bin datoteke > ");
    scanf("%s", binDat);

   if (stvoriStanariUStanu(txtDat,binDat) == 0) {
        printf("Ne postoji datoteka.\n");
        return 0;
    }

    fb = fopen(binDat, "rb");

    printf("\nSadrzaj binarne datoteke:\n");
    printf("Stan stanara\n");
    printf("----|-------\n");

    int i = 0;
    while (stan[i].stanaraUStanu != 0) {
        // Ispisujemo samo stanove u kojima ima stanara
        if (stan[i].idStana != 0) {
            printf("%4d | %4d", stan[i].idStana, stan[i].stanaraUStanu);
        }
    }

    fclose(fb);
    return 0;
}