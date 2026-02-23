#include <stdio.h>

float zamijeniGlavnaD(float *p, int n){

    float suma=0;

    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n/2; j++){

            if(i == j){

                float temp;
                temp = *(p+i*n+j);
                *(p+i*n+j) = *(p + (n-1-i)*n + (n-1-i));
                *(p + (n-1-i)*n + (n-1-i)) = temp;
            }

            for (int i = 0; i < n; i++) {
                suma += *(p + i*n + (n-1-i));
            }


        }
    }
    return suma;

}