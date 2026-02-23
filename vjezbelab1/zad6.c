//Napišite program koji će s tipkovnice pročitati cijeli broj (zanemarite realne brojeve) koji predstavlja pH vrijednost i koji će ispisati je li otopina kisela, neutralna ili lužnata. U slučaju unosa broja izvan dozvoljenog intervala, ispišite "KRIVI UNOS".
# include <stdio.h>

int main (void){

    int broj;
    printf("Unesite pH vrijednost otopine > ");
    scanf("%d", &broj);

    if (broj < 0  || broj > 14){

        printf("KRIVI UNOS");

    } else {

        if (broj == 7)
        printf("Otopina je neutralna.\n");

        if (broj < 7)
        printf("Otopina je kisela.\n");

        if (broj > 7)
        printf("Otopina je luznata.\n");

        }


    return 0;
}