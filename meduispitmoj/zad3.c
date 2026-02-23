#include <stdio.h>

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
    
    float prosjecnarazlika;
    int brojstudenata = 0;
    float sumaRazlika;
    float razlika[50];
    
    for(int i = 0; i < 50; i++){
        if(ID == studenti[i].identpi){

            brojstudenata++;
            razlika[i] = studenti[i].edgar - studenti[i].nastavnik;
            sumaRazlika += razlika[i];
             
        }
    }

    prosjecnarazlika = (1 / brojstudenata) * sumaRazlika;
    
    printf("Broj studenata: %d\n", brojstudenata);
    printf("Prosjecna razlika: %.2f\n", prosjecnarazlika);

    //varijanca


    

    

    







    return 0;
}