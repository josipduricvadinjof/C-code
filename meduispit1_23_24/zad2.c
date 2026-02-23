#include <stdio.h>

int main(void) {

    char niz1[20];
    char niz2[20];

    printf("Unesite prvi niz > ");
    fgets(niz1, sizeof(niz1), stdin);

    printf("Unesite drugi niz > ");
    fgets(niz2, sizeof(niz2), stdin);

    /* --- uklanjanje '\n' iz oba niza --- */

    for (int i = 0; i < 20; i++) {
        if (niz1[i] == '\n') {
            niz1[i] = '\0';
            break;
        }
        if (niz1[i] == '\0')
            break;
    }

    for (int i = 0; i < 20; i++) {
        if (niz2[i] == '\n') {
            niz2[i] = '\0';
            break;
        }
        if (niz2[i] == '\0')
            break;
    }

    /* --- ručno odrediti duljine --- */

    int len1 = 0;
    while (len1 < 20 && niz1[len1] != '\0')
        len1++;

    int len2 = 0;
    while (len2 < 20 && niz2[len2] != '\0')
        len2++;

    /* --- okrenuti drugi niz --- */

    for (int i = 0, j = len2 - 1; i < j; i++, j--) {
        char temp = niz2[i];
        niz2[i] = niz2[j];
        niz2[j] = temp;
    }

    /* --- izgradnja novog niza --- */

    char spojeni[40];
    int k = 0;

    // kopiramo niz1
    for (int i = 0; i < len1; i++)
        spojeni[k++] = niz1[i];

    // dodajemo obrnuti niz2
    for (int i = 0; i < len2; i++)
        spojeni[k++] = niz2[i];

    spojeni[k] = '\0';

    /* --- ispis --- */

    printf("Spojeni niz > %s\n", spojeni);

    return 0;
}
