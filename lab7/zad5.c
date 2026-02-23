#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char **retci = NULL;      // niz pokazivača na retke
    int brojRedaka = 0;       // broj unesenih redaka
    char buffer[81];          // buffer za unos jednog retka (max 80 znakova + '\0')

    printf("Upisite recenice:\n");

    while (1) {
        fgets(buffer, sizeof(buffer), stdin); // čitanje retka uključujući \n

        // provjera da li redak sadrži "KRAJ"
        if (strstr(buffer, "KRAJ") != NULL) {
            break; // prekid unosa
        }

        // proširenje niza retaka za jedan novi redak
        char **tmp = realloc(retci, (brojRedaka + 1) * sizeof(char*));
        if (tmp == NULL) {
            // greška pri alokaciji
            for (int i = 0; i < brojRedaka; i++) {
                free(retci[i]);
            }
            free(retci);
            printf("Greska pri alokaciji memorije!\n");
            return 1;
        }
        retci = tmp;

        // alokacija memorije za novi redak i kopiranje iz buffera
        retci[brojRedaka] = malloc(strlen(buffer) + 1); // +1 za '\0'
        if (retci[brojRedaka] == NULL) {
            for (int i = 0; i < brojRedaka; i++) {
                free(retci[i]);
            }
            free(retci);
            printf("Greska pri alokaciji memorije!\n");
            return 1;
        }
        strcpy(retci[brojRedaka], buffer);

        brojRedaka++;
    }

    // ispis svih redaka osim zadnjeg
    printf("\nTekst:\n");
    for (int i = 0; i < brojRedaka; i++) {
        printf("%s", retci[i]);
    }

    // oslobađanje memorije
    for (int i = 0; i < brojRedaka; i++) {
        free(retci[i]);
    }
    free(retci);

    return 0;
}
