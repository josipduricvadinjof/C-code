#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float *brojevi = NULL;
    float *tmp = NULL;
    int brojBrojeva = 0;
    float prviBroj;
    float unos;
    float srednjaVrijednost;
    float suma = 0;

    printf("Unesite vrijednosti >\n");
    scanf("%f", &unos);

    tmp = realloc(brojevi, sizeof(float));
    if (tmp == NULL) {
        return 1;
    }

    brojevi = tmp;
    brojevi[0] = unos;
    prviBroj = unos;
    brojBrojeva = 1;
    suma = prviBroj;

    while (1) {

        scanf("%f", &unos);

        if (unos == prviBroj) {
            break;
        }

        tmp = realloc(brojevi, (brojBrojeva + 1) * sizeof(float));
        if (tmp == NULL) {
            free(brojevi);
            return 1;
        }

        brojevi = tmp;
        brojevi[brojBrojeva] = unos;
        suma += unos;
        brojBrojeva++;
    }

    srednjaVrijednost = suma / brojBrojeva;

    printf("Srednja vrijednost > %.2f\n", srednjaVrijednost);
    printf("Manje od srednje >\n");

    for (int i = 0; i < brojBrojeva; i++) {
        if (brojevi[i] < srednjaVrijednost) {
           printf("(");
            printf("%.2f", brojevi[i]);
           printf(")");
        }
    }

    free(brojevi);
    return 0;
}
