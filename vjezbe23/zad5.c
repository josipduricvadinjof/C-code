#include <stdio.h>
#include <string.h>

int main(void) {

    FILE *f = fopen("osobe.txt", "r");
    if (f == NULL) {
        printf("Ne mogu otvoriti datoteku.\n");
        return 1;
    }

    int maticni;
    char ime[21];
    char prezime[21];
    int dan, mjesec, godina;

    while (fscanf(f, "%d %20s %20s %d.%d.%d",
                  &maticni, ime, prezime,
                  &dan, &mjesec, &godina) == 6) {

        if (strstr(ime, "na") != NULL || godina == 1987) {
            printf("%d %s %s\n", maticni, ime, prezime);
        }
    }

    fclose(f);
    return 0;
}
