#include <stdio.h>

int main(void) {
    int a, b, zbroj = 0;

    printf("Upisite dva prirodna broja iz intervala [1, 1000] > ");
    scanf("%d %d", &a, &b);

    if (a < 1 || a > 1000 || b < 1 || b > 1000) {
        printf("Brojevi moraju biti u intervalu [1, 1000].");
    } else if(a >= b){
        printf("Prvi broj mora biti manji od drugog broja.");
    } else{

        for(int i = a + 2 ; i < b; i=i+3){

            zbroj = zbroj + i;


        }

        printf("Zbroj svakog treceg broja iznosi: %d", zbroj);


    }


    

    return 0;
}
