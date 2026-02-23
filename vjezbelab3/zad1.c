#include <stdio.h>

int main(void) {
    int m;

    printf("Upisite velicinu polja m > ");
    scanf("%d", &m);

    int polje[m];
    printf("Upisite %d clanova polja m > ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &polje[i]);
    }

    int temp_suma = polje[0];
    int max_suma = polje[0];
    int pocetak = 0;
    int kraj = 0;
    int max_pocetak = 0;

    for (int i = 1; i < m; i++) {
        if (temp_suma < 0) {
            temp_suma = polje[i];
            pocetak = i;
        } else {
            temp_suma += polje[i];
        }

        if (temp_suma > max_suma) {
            max_suma = temp_suma;
            max_pocetak = pocetak;
            kraj = i;
        }
    }

    printf("\nPronadjeno pod-polje: ");
    for (int i = max_pocetak; i <= kraj; i++) {
        printf("%d ", polje[i]);
    }

    printf("\nNajveca suma kontinuiranog pod-polja je: %d\n", max_suma);

    return 0;
}
