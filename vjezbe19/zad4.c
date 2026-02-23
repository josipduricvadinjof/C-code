#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Unesite inicijalnu velicinu polja: ");
    int v1;
    scanf("%d", &v1);

    int *polje = malloc(v1 * sizeof(int));
    if (polje == NULL) {
        return 1; // malloc nije uspio
    }

    printf("Unesite %d elemenata:\n\n", v1);
    for (int i = 0; i < v1; i++) {
        scanf("%d", &polje[i]);
    }

    int brel;
    printf("Unesite broj elemenata koje zelite umetnuti: ");
    scanf("%d", &brel);

    printf("Unesite poziciju od koje zelite umetnuti elemente (0 do %d):\n", v1);
    int pozicija;
    scanf("%d", &pozicija);

    if (pozicija > v1 || pozicija < 0) {
        printf("Neispravna pozicija!\n");
        printf("Polje nakon umetanja:");
        for (int i = 0; i < v1; i++) {
            printf(" %d", polje[i]);
        }
        printf("\n");
        free(polje);
        return 0;
    }

    // povećavamo polje
    int *tmp = realloc(polje, (v1 + brel) * sizeof(int));
    if (tmp == NULL) {
        free(polje);
        return 1;
    }
    polje = tmp;

    // pomak starijih elemenata udesno
    for (int i = v1 - 1; i >= pozicija; i--) {
        polje[i + brel] = polje[i];
    }

    // unos novih elemenata
    printf("Unesite %d elementa koja zelite umetnuti:\n", brel);
    for (int i = 0; i < brel; i++) {
        scanf("%d", &polje[pozicija + i]);
    }

    v1 += brel; // ažuriramo veličinu polja

    printf("Elementi su uspjesno umetnuti.\n");
    printf("Polje nakon umetanja:");
    for (int i = 0; i < v1; i++) {
        printf(" %d", polje[i]);
    }
    printf("\n");

    free(polje);
    return 0;
}
