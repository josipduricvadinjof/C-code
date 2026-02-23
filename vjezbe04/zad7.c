#include <stdio.h>

int main (void){

    int kilometri;
    printf("Ucitaj kilometre >");
    scanf("%d", &kilometri);

    if (kilometri >= 0 && kilometri < 12)
        printf("Troposfera");
    else if (kilometri >= 12 && kilometri < 50)
        printf("Stratosfera");
    else if (kilometri >= 50 && kilometri < 80)
        printf("Mezosfe");
    else if (kilometri >= 80 && kilometri < 700)
        printf("Termosfera");
    else
       
 
 
return 0;
    

    


}