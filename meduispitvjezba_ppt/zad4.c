#include <stdio.h>
#include <math.h>

int main (void){

    double a, b;
    int n;
    printf("Upisite a, b i n > ");
    scanf("%lf %lf %d", &a, &b, &n);

    double nizA[n];
    double nizB[n];

    nizA[0] = a;
    nizB[0] = b;

    for(int i = 1; i < n; i++){
        nizA[i] = (nizA[i - 1] + nizB[i - 1]) / 2;
        nizB[i] = sqrt(nizA[i - 1] * nizB[i - 1]);
    }

    int i;
    for(i = 0; i < n; i++){
        printf("A(%d)= %.5lf B(%d)= %.5lf \n", i + 1, nizA[i], i + 1, nizB[i]);
    }




    return 0;
}