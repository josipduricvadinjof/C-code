#include <stdio.h>



void pamti5IspisiProsjek(int temp)
{
    static int zadnjih5[5];
    static int brojac = 0;

    zadnjih5[brojac % 5] = temp;
    brojac++;

    int koliko = brojac < 5 ? brojac : 5;
    int suma = 0;

    for (int i = 0; i < koliko; i++)
        suma += zadnjih5[i];

    double prosjek = (double)suma / koliko;

    printf("Prosjek: %.2f\n", prosjek);
}



int main(void)
{
    int temp;

    while (1) {
        printf("Unesite temperaturu> ");
        scanf("%d", &temp);

        if (temp == -1000)
            break;

        pamti5IspisiProsjek(temp);
    }

    return 0;
}
