#include <stdio.h>

int djelitelj(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void reduciraj(int br, int nzv) {
    int nzd = djelitelj(br, nzv);

    br /= nzd;
    nzv /= nzd;

    if (nzv == 1) {
        printf("Reduciran: %d\n", br);
    } else {
        printf("Reduciran: %d/%d\n", br, nzv);
    }
}

int main(void) {
    int a, b;
    printf("Upisite brojnik i nazivnik: ");
    scanf("%d %d", &a, &b);

    printf("Razlomak: %d/%d\n", a, b);

    reduciraj(a, b);

    return 0;
}
