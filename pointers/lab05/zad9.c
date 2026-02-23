#include <stdio.h>

int ProvjeriLozinku(char *password, int *brBrojeva, int *brVelikih, int *brSpec){
    *brBrojeva = 0;
    *brVelikih = 0;
    *brSpec = 0;

    int duljina = 0;

    for (int i = 0; password[i] != '\0'; i++) {
        if (password[i] == '\n') break;   

        duljina++; 

        if (password[i] >= '0' && password[i] <= '9') {
            (*brBrojeva)++;
        } else if (password[i] >= 'A' && password[i] <= 'Z') {
            (*brVelikih)++;
        } else if (password[i] == '!' || password[i] == '?' ||
                   password[i] == '*' || password[i] == '#') {
            (*brSpec)++;
        }
    }

    return duljina;
}


int main (void){


    printf("Upisite lozinku > ");
    char lozinka[10];
    fgets(lozinka, sizeof(lozinka), stdin);

    int brBrojeva, brVelikih, brSpec, duljina;

    duljina = ProvjeriLozinku(lozinka,&brBrojeva,&brVelikih,&brSpec);

    if(duljina == 10 && brBrojeva >= 2 && brVelikih >= 2 && brSpec >= 1 ){
        printf("Lozinka je ispravna!");
    } else if( duljina != 10){
        printf("Lozinka je pre kratka!");
        return 0;

    }else if( brBrojeva < 2){
        printf("Nema dovoljno brojeva!");

    } else if(brVelikih < 2){
        printf("Nema dovoljno velikih slova!");
    }else if(brSpec == 0){
        printf("Nema dovoljno specijalnih znakova!");
    }



    return 0;
}