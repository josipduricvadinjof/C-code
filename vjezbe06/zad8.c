#include <stdio.h>

int main (void){

    //učitati cijeli broj n koji mora biti iz intervala [3, 20]
    //Učitavanje broja n ponavljati dok god ne bude ispravno upisan.
    int n;
    while (n < 3 || n > 20 ){
        printf("Upisite broj iz intervala [3, 20] > ");
        scanf("%d", &n);
    }
    //učitati n cijelih brojeva i pohraniti ih u polje ulaz
    int ulaz[n];
    printf ("Upisite cijele brojeve (%d) > ", n);
    for(int i = 0; i < n; i++){
        
        scanf("%d", &ulaz[i]);
    }
    

    //U polje parni redom prepisati sve parne vrijednosti, a u polje neparni sve neparne vrijednosti iz polja ulaz
    int parni[n], neparni[n];
    int brojParnih = 0, brojNeparnih = 0;

    for (int i = 0; i < n; i++) {
        if (ulaz[i] % 2 == 0) {

            parni[brojParnih] = ulaz[i];
            brojParnih++;

        } else {
            neparni[brojNeparnih] = ulaz[i];
            brojNeparnih++;
        }
    }
    //Na kraju ispisati članove polja ulaz, parni i neparni,
    printf("Ulaz: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", ulaz[j]);
    }
    printf("\n");

    printf("Parni: ");
    for (int j = 0; j < n; j++) {
        printf("%d ", parni[j]);
    }
    printf("\n");

    printf("Neparni: ");
    for (int j = 0; j < n; j++) {
        printf("Neparni: %d ", neparni[j]);
    }
    printf("\n");

    return 0;
}