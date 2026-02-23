#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {

    FILE *tokUlaz = fopen("C:\\Users\\PEPI\\Desktop\\ulaz.txt", "r");

    if (tokUlaz == NULL) {
        perror("Greska pri otvaranju fajla");
        return 1;
    }

    int c;
    while ((c = getc(tokUlaz)) != EOF) {

        if (islower(c)) {
            c = toupper(c);
        }

        putchar(c);
    }

    fclose(tokUlaz);
    return 0;
}
