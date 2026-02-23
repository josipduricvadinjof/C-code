#include <stdio.h>

int zajednickiDjelitelj(int *matrica, int m, int n) {
    int ukupno = m * n;
    
    // Prolazimo kroz svaki element matrice
    for (int i = 0; i < ukupno; i++) {
        int kandidat = *(matrica + i);  // element matrice
        int djeljiv_sa_svim = 1;        // pretpostavljamo da je djeljiv
        
        // Provjeravamo sve elemente matrice
        for (int j = 0; j < ukupno; j++) {
            if (*(matrica + j) % kandidat != 0) {
                djeljiv_sa_svim = 0;  // nije djeljivo
                break;
            }
        }
        
        if (djeljiv_sa_svim) {
            return kandidat;  // našli smo element
        }
    }
    
    return 1;  // nema takvog elementa
}

void podijeli(int *matrica, int m, int n, int *rezultat) {
    int djelitelj = zajednickiDjelitelj(matrica, m, n);
    int ukupno = m * n;

    for (int i = 0; i < ukupno; i++) {
        *(rezultat + i) = *(matrica + i) / djelitelj;
    }
}

int main(void) {
    int m, n;

    printf("Unesite m i n > ");
    scanf("%d %d", &m, &n);

    int matrica[m][n];
    printf("Unesite clanove matrice >\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &matrica[i][j]);
        }
    }

    int rezultatz = zajednickiDjelitelj((int*)matrica, m, n);
    printf("Zajednicki djelitelj: %d\n", rezultatz);

    int rezultat[m][n];
    podijeli((int*)matrica, m, n, (int*)rezultat);

    printf("Rezultat funkcije podijeli:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
           printf("%d ", rezultat[i][j]);
        }
        printf("\n");
    }

    return 0;
}



