#include <stdio.h>

int main(void) {

    //unos u matricu
    int n;

    printf("Unesite n > ");
    scanf("%d", &n);

    int polje[n][n];

    for (int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
        scanf("%d", &polje[i][j]);
    }

    //izracunat sumu svakeg stupca
    
    int polje_suma[n];
    int razlika_suma[n];

    for(int j = 0; j < n; j++){
        int suma = 0;
        for(int i = 0; i < n; i++){
            suma += polje[i][j];

        }
        polje_suma[j] = suma;
    }

    for(int j = 0; j < n - 1; j++){
        razlika_suma[j] = polje_suma[j] - polje_suma[j + 1];
    }

    razlika_suma[n-1] = polje_suma[n-1] - polje_suma[0];

    printf("Rezultat > ");
    for(int i = 0; i < n; i++){
        printf("%d ", razlika_suma[i]);
    }



    
    return 0;
}
