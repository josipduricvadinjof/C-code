#include <stdio.h>
#include <string.h>

int main(void) {

    FILE *f = fopen("PredemtiPonovo.txt", "r");
    if (f == NULL) {
        printf("Ne mogu otvoriti datoteku.\n");
        return 1;
    }

    char imep[31];
    printf("Upisite ime i prezime studenta > ");
    fgets(imep, sizeof(imep), stdin);

    char *p = strchr(imep, '\n');
    if (p) *p = '\0';

    int sifras, sifrap, ects;
    char ime[31], predmet[41];

    int ukupnoECTS = 0;

    printf("Upisati ponovo:\n");
    printf("-------------------------------------------\n");

    while (fscanf(f, "%d,%30[^,],%d,%40[^,],%d",
                  &sifras, ime, &sifrap, predmet, &ects) == 5) {

        if (strcmp(imep, ime) == 0) {
            printf("%5d %-30s %3d\n", sifrap, predmet, ects);
            ukupnoECTS += ects;
        }
    }

    printf("-------------------------------------------\n");
    printf("Ukupno EUR: %d\n", ukupnoECTS * 20);

    fclose(f);
    return 0;
}
