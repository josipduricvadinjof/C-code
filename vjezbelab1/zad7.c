# include <stdio.h>

int main (void){

    int broj, i;
    printf("Unesite broj rijeci brojalice > ");
    scanf("%d", &broj);

    if (broj <= 0 ){

        printf("KRIVI UNOS");

    } else {

        for (i = 1; i <= broj; i++) {

            if (i % 3 == 1){

                 printf("eci ");

            }else if(i % 3 == 2){
                printf("peci ");
            } else{
                printf("pec ");
            }

           
        }
    }

        


    return 0;
}