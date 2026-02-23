#include <stdio.h>

int myStrlen(const char *niz) {

    int len = 0;

    for (int i = 0; *(niz + i) != '\0'; i++) {
        len++;
    }

    return len;
}

int main(void) {
    char niz[100];
    const char konstantniNiz[] = "Ovo je konstantni niz";

    printf("niz: ");
    fgets(niz, sizeof(niz), stdin);

    /* uklanjanje znaka novog reda */
    for (int i = 0; niz[i] != '\0'; i++) {
        if (niz[i] == '\n') {
            niz[i] = '\0';
            break;
        }
    }

    printf("duljina niza: %d\n", myStrlen(niz));
    printf("konstantni niz: %s\n", konstantniNiz);
    printf("duljina konstantnog niza: %d\n", myStrlen(konstantniNiz));

    return 0;
}
