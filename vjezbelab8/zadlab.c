#include <stdio.h>

struct prodaja_s {

    int sifProizvod;
    char nazivProizvod[20+1];
    double zaradjeniIznos;
};



void zaradaPoProizvodu(const char* txtDat, const char* binDat){

    FILE *ft = fopen(txtDat, "r");
    FILE *fb = fopen(binDat, "wb");

    if (!fb || !ft) {
        if (fb) fclose(fb);
        if (ft) fclose(ft);
        return;
    }


    struct prodaja_s struktura;

    int sifra_txt;
    int kolicina;
    double cijena;
    int redni = 1; 

    while((ft, "%d#%20s[^#]s#%d#%f#", &sifra_txt, struktura.nazivProizvod, &kolicina, &cijena) == 4){

        struktura.sifrProizvod = redni++;
        zapis.zaradjeniIznos = kolicina * cijena;

        fwrite(&zapis, sizeof(struct prodaja_s), 1, fb);
    }
    }





   fclose(fb);
   fclose(ft);
}
