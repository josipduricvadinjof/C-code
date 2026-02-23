#include <stdio.h>
#include <string.h>

int main(void) {

    FILE *ulaz = fopen("filmovi.txt", "r");
    FILE *drama = fopen("drama.txt", "w");
    FILE *sf = fopen("SF.txt", "w");
    FILE *komedija = fopen("komedija.txt", "w");

    char red[200];
    char naziv[61];
    char zanr[20];
    int godina;

    while (fgets(red, sizeof(red), ulaz) != NULL) {

        sscanf(red, "%60[^|]|%19[^|]|%d", naziv, zanr, &godina);

        if (strcmp(zanr, "drama") == 0) {
            fprintf(drama, "%s, %d\n", naziv, godina);
        }
        else if (strcmp(zanr, "SF") == 0) {
            fprintf(sf, "%s, %d\n", naziv, godina);
        }
        else if (strcmp(zanr, "komedija") == 0) {
            fprintf(komedija, "%s, %d\n", naziv, godina);
        }
    }

    fclose(ulaz);
    fclose(drama);
    fclose(sf);
    fclose(komedija);

    return 0;
}
