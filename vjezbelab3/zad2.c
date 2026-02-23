#include <stdio.h>

int main(void) {

    //unos u matricu
    int m;

    printf("Upisite broj redaka/stupaca matrice > ");
    scanf("%d", &m);

    int polje[m][m];

    printf("Upisite %dx%d clanova > \n", m, m);
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < m; j++)
        scanf("%d", &polje[i][j]);
    }

    //odabir retka i stupca
    int r, s;
    printf("Upisite redni broj retka > ");
    scanf("%d", &r);

    printf("Upisite redni broj stupca > ");
    scanf("%d", &s);

    // izračunat sumu elemenata odabranog retka i stupca
    int suma = 0;
    int suma_retka = 0;
    int suma_stupca = 0;

    for (int j = 0; j < m; j++) {
        suma_retka += polje[r][j];
    }


    for (int i = 0; i < m; i++) {
        suma_stupca += polje[i][s];
    }


    suma = suma_retka + suma_stupca - polje[r][s];

    printf("Suma brojeva koji se nalaze u retku %d i stupcu %d je %d", r, s, suma);



    
    return 0;
}
