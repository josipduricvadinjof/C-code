#include <stdio.h>

int main (void){

    int m, n;
    printf("Upisite m, n > \n");
    scanf("%d %d", &m, &n);

    printf("Unesite %d x %d clanova >\n", m, n);

    int polje[m][n];

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &polje[i][j]);
        }

    }

    

    for (int j = 0; j < n; j++) {            // prolazi stupce
        for (int i = 0; i < m - 1; i++) {        // ide po redcima
            for (int k = i + 1; k < m; k++) {    // uspoređuje elemente ispod retka i
                if (polje[k][j] < polje[i][j]) {
                    int temp = polje[i][j];
                    polje[i][j] = polje[k][j];
                    polje[k][j] = temp;
                }
            }
        }
    }


    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d", polje[i][j]);
        }
    }



    
    
    return 0;
}