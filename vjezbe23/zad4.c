#include <stdio.h>

int main(void) {

    FILE *f = fopen("brojevi.txt", "r");
    if (f == NULL) {
        printf("Nije ucitan niti jedan broj\n");
        return 0;
    }

    double broj;
    double suma = 0.0;
    int counter = 0;

    while (fscanf(f, "%lf", &broj) == 1) {
        suma += broj;
        counter++;
    }

    if (counter == 0) {
        printf("Nije ucitan niti jedan broj\n");
    } else {
        printf("%f\n", suma / counter);
    }

    fclose(f);
    return 0;
}
