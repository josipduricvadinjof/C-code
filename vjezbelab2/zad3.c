#include <stdio.h>
int main (void){

    //učitati vrijednosti za broj redaka m i broj stupaca n dvodimenzijskog cjelobrojnog polja
    int m, n;
    int polje[100][100];
    printf("Unesi dimenzije: ");
    scanf("%d %d", &m, &n);
    //Ako vrijednosti m i n nisu jednake, prekinuti s izvršavanjem programa i ispisati odgovarajuću poruku
    if (m != n){
        printf("Dimenzije ne odgovaraju kvadratnoj matrici!\n");
    } else {
        //Po retcima učitati prirodne brojeve kao vrijednosti članova polja od m redaka i n stupaca
    printf("Unesi clanove polja:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            scanf("%d", &polje[i][j]);
        }
    }

    //ispisat matricu
    printf ("Odabrana je matrica: \n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", polje[i][j]);
            if (j == n - 1){
                printf("\n");
            }
            
        }
    }
    //napisati program koji ispisuje razliku zbroja kvadrata glavne dijagonale i sporedne dijagonale polja
    int zbrojkvadrataglavne = 0;
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j++){
            if (i == j){
                zbrojkvadrataglavne += polje[i][j] * polje[i][j];
            }
        }
    }

    int zbrojkvadratasporedne = 0;
    for (int i = 0; i < m; i ++){
        for (int j = 0; j < n; j++){
            if (i + j == n - 1){
                zbrojkvadratasporedne += polje[i][j] * polje[i][j];
            }
        }
    }
    int razlika = zbrojkvadrataglavne - zbrojkvadratasporedne;

    printf("Razlika zbrojeva je %d", razlika);
    }
    


    return 0;
}