#include <stdio.h>

int main(void) {
    int brojevi[10];

    printf("Upisite 10 cijelih brojeva > ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &brojevi[i]);
    }

    for (int i = 0; i < 5; i++ ){
        int p = brojevi[i];
        brojevi[i] = brojevi[9 - i];
        brojevi[9 - i] = p;
    }

    for (int i = 0; i < 10; i++){
        printf("%d", brojevi[i]);
        if (i < 10) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}