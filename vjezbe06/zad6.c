#include <stdio.h>

int main(void) {
    int broj, i = 0;
    int znamenke[32];

    printf("Upisite cijeli broj > ");
    scanf("%d", &broj);

    // Pretvori broj u binarni oblik
    while (broj > 0) {
        znamenke[i] = broj % 2;
        broj = broj / 2;
        i++;
    }

    // Obrni redoslijed znamenki
    for (int j = 0; j < i / 2; j++) {
        int p = znamenke[j];
        znamenke[j] = znamenke[i - 1 - j];
        znamenke[i - 1 - j] = p;
    }

    // Ispis binarnog zapisa
    printf("Binarni zapis: ");
    for (int j = 0; j < i; j++) {
        printf("%d", znamenke[j]);
    }

    printf("\n");
    return 0;
}
