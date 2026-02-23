#include <stdio.h>
#include <math.h>

struct student{
    int matbr;
    int identpi;
    int edgar;
    int nastavnik;
};

int main (void){

    struct student studenti[50];
   

    printf("Unos podataka:\n");

    for(int i = 0; i < 50; i++){
        scanf("%d", &studenti[i].matbr);
        if(studenti[i].matbr == 0){
            break;
        }

        scanf("%d %d %d", &studenti[i].identpi, &studenti[i].edgar, &studenti[i].nastavnik);
        

    }

    printf("Unesite ID pitanja za analizu: \n");
    int ID;
    scanf("%d", &ID);

    printf("Rezultati:\n");
    
    
    //izracun prosjecne razlike
    float varijanca; 
    float sumaEdgar = 0;
    float sumaNastavnik = 0;
    float prosjecnarazlika;
    int brojstudenata = 0;
    
    for(int i = 0; i < 50; i++){
        if(ID == studenti[i].identpi){

            brojstudenata++;
            sumaEdgar += studenti[i].edgar;
            sumaNastavnik += studenti[i].nastavnik;  
        }
    }

    prosjecnarazlika = (sumaEdgar - sumaNastavnik) / brojstudenata;
    
    printf("Broj studenata: %d\n", brojstudenata);
    printf("Prosjecna razlika: %.2f\n", prosjecnarazlika);

    //varijanca

    float razlika[brojstudenata];
    float sumarazipros = 0;

    for(int i = 0; i < 50; i++){
        if(ID == studenti[i].identpi){

            razlika[i] = studenti[i].edgar - studenti[i].nastavnik;
            sumarazipros += razlika[i] - prosjecnarazlika;

        }
    }
    
    varijanca = (1 / brojstudenata - 1) * pow(sumarazipros, 2);

    printf("Varijanca: %.2f", varijanca);



    

    

    







    return 0;
}