#include <stdio.h>

int main(void) {
    int n = 1, ispisanih = 0;
    while (ispisanih < 50) {
        if (n % 3 == 0 || n % 7 == 0) {
        if (ispisanih % 10 == 0) {
        if (ispisanih > 0) {
            printf("\n");
        }
    } else {
        printf(", ");
    }
        printf("%d", n);
        ispisanih = ispisanih + 1;
    }
        n = n + 1;
 }
 return 0;
}