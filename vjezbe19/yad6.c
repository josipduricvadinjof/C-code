#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char simbol[11]; // max 10 znakova + \0
    int broj_dionica;
    float cijena;
} Dionica;

int main() {
    Dionica* portfelj = NULL; // početno prazno polje
    int broj_dionica = 0;     // koliko dionica trenutno u portfelju
    int opcija;

    do {
        // Ispis opcija
        printf("Opcije:\n");
        printf("1. Dodajte novu dionicu\n");
        printf("2. Ispis portfelja\n");
        printf("3. Izlaz\n");
        printf("Odaberite opciju: ");
        scanf("%d", &opcija);

        switch(opcija) {
            case 1: { // unos nove dionice
                Dionica* tmp = realloc(portfelj, (broj_dionica + 1) * sizeof(Dionica));
                if (tmp == NULL) {
                    printf("Greska u alokaciji memorije!\n");
                    free(portfelj);
                    return 1;
                }
                portfelj = tmp;

                printf("Unesite simbol dionice: ");
                scanf(" %10s", portfelj[broj_dionica].simbol);
                printf("Unesite kolicinu dionica koje posjedujete: ");
                scanf("%d", &portfelj[broj_dionica].broj_dionica);
                printf("Unesite trenutacnu cijenu dionice: ");
                scanf("%f", &portfelj[broj_dionica].cijena);

                broj_dionica++;
                break;
            }

            case 2: { // ispis portfelja
                if (broj_dionica == 0) {
                    printf("Portfelj je prazan.\n");
                } else {
                    for (int i = 0; i < broj_dionica; i++) {
                        printf("Simbol: %s | Broj dionica: %d | Cijena: %.2f\n",
                               portfelj[i].simbol,
                               portfelj[i].broj_dionica,
                               portfelj[i].cijena);
                    }
                }
                break;
            }

            case 3: { // izlaz
                float ukupno = 0.0;
                for (int i = 0; i < broj_dionica; i++) {
                    ukupno += portfelj[i].broj_dionica * portfelj[i].cijena;
                }
                printf("Ukupna vrijednost portfelja iznosi: %.2f\n", ukupno);
                break;
            }

            default:
                printf("Nepoznata opcija. Molimo odaberite ponovno.\n");
        }

    } while (opcija != 3);

    free(portfelj);
    return 0;
}
