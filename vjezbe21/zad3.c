#include <stdio.h>
#include <string.h>

#define MAX 60

/* uklanja znak '\n' ako postoji */
void ukloni_novi_red(char *s) {
    char *p = strchr(s, '\n');
    if (p != NULL) {
        *p = '\0';
    }
}

int main(void) {
    char a[MAX + 1];
    char b[MAX + 1];
    char c[MAX + 1];

    printf("Upisite 1. niz > ");
    fgets(a, MAX + 1, stdin);
    printf("Upisite 2. niz > ");
    fgets(b, MAX + 1, stdin);
    printf("Upisite 3. niz > ");
    fgets(c, MAX + 1, stdin);

    /* uklanjanje '\n' */
    ukloni_novi_red(a);
    ukloni_novi_red(b);
    ukloni_novi_red(c);

    /* pokazivači za sortiranje */
    char *x = a, *y = b, *z = c;

    /* sortiranje 3 niza */
    if (strcmp(x, y) > 0) {
        char *t = x; x = y; y = t;
    }
    if (strcmp(y, z) > 0) {
        char *t = y; y = z; z = t;
    }
    if (strcmp(x, y) > 0) {
        char *t = x; x = y; y = t;
    }

    /* ispis */
    printf("%s\n", x);
    printf("%s\n", y);
    printf("%s\n", z);

    return 0;
}
