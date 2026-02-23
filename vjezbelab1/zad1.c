/* S tipkovnice učitati četveroznamenkasti broj (nije potrebno provjeravati ispravnost upisa). 
Ako je zbroj znamenke tisućica i znamenke desetica jednak zbroju znamenke stotica i znamenke jedinica, 
potrebno je ispisati "Provjera je uspješna!", 
a u suprotnom treba ispisati apsolutnu vrijednost razlike tih dviju suma.*/

 #include <stdio.h>

 int main (void){

    int broj, tis, sto, des, jed, rsum;
    printf("Unesite·cetveroznamenkasti·broj·>·");
    scanf("%d", &broj);

    tis = broj / 1000;          // tisućice
    sto = (broj / 100) % 10;    // stotice
    des = (broj / 10) % 10;     // desetice
    jed = broj % 10;            // jedinice
    rsum = (tis + des) - (sto + jed);

    if((tis + des) == (sto + jed)){

        printf("Provjera·je·uspjesna!");

    } else {

        if (rsum < 0){

            rsum = - rsum;
        }

        printf("Apsolutna·razlika·suma·je· %d", rsum);


    }




    return 0;
 }