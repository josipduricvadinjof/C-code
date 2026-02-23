#include <stdio.h>

int main(void) {
    int b;
    printf("Unesite broj clanova polja:\n");
    scanf("%d", &b);

    int polje[b];

    printf("Unesite clanove polja (%d):\n", b);
    for (int i = 0; i < b; i++) {
        scanf("%d", &polje[i]);
    }

    int originalno[b];
    for (int i = 0; i < b; i++) {
        originalno[i] = polje[i];
    }

    int novavrijednost, indeks;
    printf("Unesite vrijednost novog clana te indeks:");
    scanf("%d %d", &novavrijednost, &indeks);

    if (indeks < 0 || indeks >= b) {
        printf("Pogrešan indeks! Dozvoljeni raspon: 0 - %d.\n", b - 1);
        return 1;
    }

    // Pomakni elemente udesno, ali zadnji "izgura van"
    for (int i = b - 1; i > indeks; i--) {
        polje[i] = polje[i - 1];
    }

    // Ubaci novi element
    polje[indeks] = novavrijednost;

    printf("\nPocetno polje\n");
    for (int j = 0; j < b; j++) {
        printf("%d ", originalno[j]);
    }

    printf("\nNovodobiveno polje\n");
    for (int j = 0; j < b; j++) {
        printf("%d ", polje[j]);
    }


    return 0;
}
