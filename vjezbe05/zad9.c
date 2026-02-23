#include <stdio.h>

int main (void) {

    int n, m;
    printf("Unesi broj >");
    scanf("%d %d", &n, &m);

    for (int i = 0; i < n; i++){
        for (int j = m - 1; j >= 0; j--){

            printf("%4d", i + 1 + j);

        }
        printf("\n");
    }

    return 0;
    


}