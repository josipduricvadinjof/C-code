#include <stdio.h>

void genPrim(int g, int *n) {
    int pronadeno = 0;
    int broj = g;

    while (pronadeno < *n) {

        int prim = 1;          // pretpostavimo da je primaran

        if (broj < 2)
            prim = 0;

        for (int d = 2; d * d <= broj; d++) {
            if (broj % d == 0)
                prim = 0;
        }

        if (prim) {
            printf("%d ", broj);
            pronadeno++;
        }

        broj++;
    }

    printf("\n");
}





int main (void){

    int g, n;

    printf("Upisite donju granicu i broj primarnih brojeva");
    scanf("%d %d", &g, &n);

    genPrim(g, &n);


    return 0;
}