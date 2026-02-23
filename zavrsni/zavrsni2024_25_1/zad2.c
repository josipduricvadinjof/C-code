#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double uzorkujPolje(int *polje, long duljinaPolje, int duljinaUzorak){


    double broj;
    double suma = 0;
    double aritmeticka;
    int indeks;

    for(int i = 0; i < duljinaUzorak; i++){
        indeks = rand() % duljinaPolje;
        broj = *(polje + indeks);
        suma += broj;
    }

    aritmeticka = suma / duljinaUzorak;

    return aritmeticka;

}

double napuniPolje(int *polje, long duljinaPolje, int donjaGranica, int gornjaGranica){

    double broj;
    double suma = 0;
    double aritmeticka;

    for(int i = 0; i < duljinaPolje; i++){
        broj = rand() % (gornjaGranica - donjaGranica + 1) + donjaGranica;
        suma += broj;
        *(polje + i) = broj;
    }

    double aritmeticka = suma / duljinaPolje;
    return aritmeticka;

}



int main(void)
{
    int d, dg, gg, dUzorak;
    scanf("%d %d %d", &d, &dg, &gg);
    int polje[d];
    srand(0);
    double as = napuniPolje(polje, d, dg, gg);
    for (int post = 5; post <= 25; post += 5)
    {
        dUzorak = d * post / 100;
        double procjArSr = uzorkujPolje(polje, d, dUzorak);
        double greska = fabs(as - procjArSr) / fabs(as) * 100;
        printf("%d%% (%d): tocno: %.2f procjena: %.2lf greska= %.2f%%\n", post, dUzorak, as, procjArSr, greska);
    }
    return 0;
}