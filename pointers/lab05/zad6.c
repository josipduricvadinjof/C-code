#include <stdio.h>
#include <math.h>

#define PI 3.14159265358979323846

void IzracunajRezultantu(float *sila1, float *sila2, float *kut, float *rezultanta){

    float kut_rad = (*kut) * PI / 180.0f;


    *rezultanta = sqrt(pow(*sila1, 2) + pow(*sila2, 2) + 2 * (*sila1) * (*sila2) * cos(kut_rad));


}

int main(void){

    float sila1, sila2, kut, rezultanta;
    
    printf("Unesite prvu silu (u Newtonima): ");
    scanf("%f", &sila1);
    printf("Unesite drugu silu (u Newtonima): ");
    scanf("%f", &sila2);
    printf("Unesite kut izmedu sila (u stupnjevima): ");
    scanf("%f", &kut);

    IzracunajRezultantu(&sila1, &sila2, &kut, &rezultanta);

    printf("Rezultantna sila iznosi: %.2f N", rezultanta);





    return 0;
}