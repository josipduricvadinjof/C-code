#include <stdio.h>

int main() {
    int n, i;
    printf("Upisite broj > ");
    scanf("%d", &n);
    

    for (i = 0; i < n * n; i++) {
        if (i % n == i / n) {
            printf("%2d", 1);  
        } else {
            printf("%2d", 0);  
        }

        if (i % n == n - 1) {  
            printf("\n");
        }
    }

    return 0;
}
