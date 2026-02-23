#include <stdio.h>
#include <stdlib.h>

/* definicija funkcije slucajniClan */
int *slucajniClan(int *polje, int m, int n)
{
    int redak = rand() % m;
    int stupac = rand() % n;

    return polje + redak * n + stupac;
}

int main(void)
{
    int m, n;
    printf("Upisite broj redaka i stupaca > ");
    scanf("%d %d", &m, &n);

    int polje[m][n];
    printf("Upisite clanove polja > ");
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &polje[i][j]);

    unsigned int sjeme;
    printf("Upisite sjeme > ");
    scanf("%u", &sjeme);
    srand(sjeme);

    /* poziv funkcije */
    int *rez = slucajniClan(&polje[0][0], m, n);

    int sumaredak = 0;
    int sumastupac = 0;
    int redak = 0;
    int stupac = 0;

    /* pronalazak indeksa elementa */
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (&polje[i][j] == rez) {
                redak = i;
                stupac = j;
            }
        }
    }

    /* suma retka */
    for (int j = 0; j < n; j++)
        sumaredak += polje[redak][j];

    /* suma stupca */
    for (int i = 0; i < m; i++)
        sumastupac += polje[i][stupac];

    printf("suma retka = %d\n", sumaredak);
    printf("suma stupca = %d\n", sumastupac);

    return 0;
}
