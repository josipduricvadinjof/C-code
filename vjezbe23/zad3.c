#include <stdio.h>
#include <stdlib.h>

int main(void) {

    FILE *TokUlaz = fopen("tablica.txt", "w");
    if (TokUlaz == NULL) {
        printf("Greška pri otvaranju datoteke!\n");
        return 1;
    }

    int n;
    printf("Upisati n > ");
    scanf("%d", &n);

    fprintf(TokUlaz, "Tablica mnozenja %d x %d\n\n", n, n);

    // Zaglavlje
    fprintf(TokUlaz, "       ");
    for (int j = 1; j <= n; j++) {
        fprintf(TokUlaz, "%4d", j);
    }
    fprintf(TokUlaz, "\n");

    // Linija ispod zaglavlja
    fprintf(TokUlaz, "----+");
    for (int j = 1; j <= n; j++) {
        fprintf(TokUlaz, "----");
    }
    fprintf(TokUlaz, "\n");

    // Redovi tablice
    for (int i = 1; i <= n; i++) {
        fprintf(TokUlaz, "%3d |", i);
        for (int j = 1; j <= n; j++) {
            fprintf(TokUlaz, "%4d", i * j);
        }
        fprintf(TokUlaz, "\n");
    }

    // Donja linija
    fprintf(TokUlaz, "----+");
    for (int j = 1; j <= n; j++) {
        fprintf(TokUlaz, "----");
    }
    fprintf(TokUlaz, "\n");

    fclose(TokUlaz);
    

    return 0;
}
