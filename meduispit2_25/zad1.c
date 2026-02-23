#include <stdio.h>

int main(void) {
    int n;
    printf("Unesite duljinu polja > ");
    scanf("%d", &n);

    while (n < 1 || n > 100) {
        scanf("%d", &n);
    }

    int polje[n];
    printf("Unesite clanove polja > ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &polje[i]);
    }

    int maxDuljina = 1;       // najveći pronađeni niz
    int trenutnaDuljina = 1;  // duljina trenutnog niza
    int indeks = 0;           // početni indeks najvećeg niza

    for (int i = 1; i < n; i++) {
        if (polje[i] == polje[i - 1]) {
            trenutnaDuljina++;
        } else {
            trenutnaDuljina = 1;
        }

        if (trenutnaDuljina > maxDuljina) {
            maxDuljina = trenutnaDuljina;
            indeks = i - maxDuljina + 1;  // početak niza
        }
    }

    printf("Pocetni indeks: %d\n", indeks);
    printf("Duljina niza: %d\n", maxDuljina);

    return 0;
}
