#include <stdio.h>

void prviNegativac(int *polje, int n) {
    int *neg = NULL;

    for (int i = 0; i < n; i++) {
        if (*(polje + i) < 0) {
            neg = polje + i;
            break;
        }
    }

    if (neg == NULL)
        printf("Nema negativnih\n");
    else
        printf("Prvi negativni je %d\n", *neg);
}

int main(void) {
    int n;

    printf("Upisite broj clanova > ");
    scanf("%d", &n);

    int polje[n];

    printf("Upisite clanove > ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &polje[i]);
    }

    prviNegativac(polje, n);

    return 0;
}
