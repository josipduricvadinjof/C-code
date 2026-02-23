#include <stdio.h>

int main(void) {

    //S tipkovnice učitava cijeli broj n – broj članova polja
    int n;
    printf("Upisite broj clanova polja > ");
    scanf("%d", &n);

    //Učitava n cijelih brojeva i sprema ih u polje
    int polje[100];
    for(int i = 0; i < n; i++){
        printf("Upisite %d. broj > ", i + 1);
        scanf("%d", &polje[i]);
    }
    //Za svaki uneseni broj izračunava njegov faktorijel i ispisuje rezultat u obliku
    printf("Ulaz:");
    for(int i = 0; i < n; i++){
        printf("%d ", polje[i]);
    }

     printf("\nIzlaz:\n");
    for (int i = 0; i < n; i++) {
        int faktorijel = 1;
        for (int j = 1; j <= polje[i]; j++) {
            faktorijel *= j;
        }
        printf("%d! = %d\n", polje[i], faktorijel);
    }
    
    return 0;
}