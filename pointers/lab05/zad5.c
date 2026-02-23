#include <stdio.h>

int PovecajKonvertiraj(float *placa, int bonus, float *postotak){
    float stara = *placa;
    *postotak = ((float)bonus / stara) * 100.0f;
    *placa = (stara + bonus) / 7.53450f;

    return (*postotak >= 10.0f);
}

int main(void){
    float placa;
    int bonus;
    float postotak;

    printf("Unesite iznos place: ");
    scanf("%f", &placa);

    printf("Unesite iznos bonusa: ");
    scanf("%d", &bonus);

    int znacajno = PovecajKonvertiraj(&placa, bonus, &postotak);

    printf("Uvecana placa: %.2f EUR te je uvecanje %.2f %%\n", placa, postotak);

    if (znacajno){
        printf("OBAVIJESTITI POREZNU!\n");
    }

    return 0;
}
