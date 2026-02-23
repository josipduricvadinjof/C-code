#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Unesite broj dana za koji zelite stvoriti popis transakcija: ");
    int n;
    scanf("%d", &n);

    int ukupanbrojtransakcija = 0;
    float *popisTransakcija = NULL;
    float *tmp = NULL;
    float stanje = 0;

    // Petlja po danima (od n do 1)
    for (int i = n; i > 0; i--) {
        printf("Unesite broj transakcija provedenih prije %d dana: ", i);
        int brtrans;
        scanf("%d", &brtrans);

        // Realloc za ukupni broj transakcija do sada
        tmp = realloc(popisTransakcija, (ukupanbrojtransakcija + brtrans) * sizeof(float));
        if (tmp == NULL) {
            free(popisTransakcija);
            printf("Greska pri alokaciji memorije!\n");
            return 1;
        }
        popisTransakcija = tmp;

        // Unos transakcija
        for (int j = 0; j < brtrans; j++) {
            printf("Transakcija %d: ", j + 1);
            scanf("%f", &popisTransakcija[ukupanbrojtransakcija + j]);
            stanje += popisTransakcija[ukupanbrojtransakcija + j];
        }

        ukupanbrojtransakcija += brtrans;
    }

    // Ispis popisa transakcija od najnovije prema najstarijoj
    printf("Popis transakcija:\n");
    for (int i = ukupanbrojtransakcija - 1; i >= 0; i--) {
        printf("%.2f\n", popisTransakcija[i]);
    }

    printf("Stanje racuna: %.2f\n", stanje);

    free(popisTransakcija);
    return 0;
}
