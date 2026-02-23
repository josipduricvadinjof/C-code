#include <stdio.h>

void transponiraj(int* src, int* dst, int n, int m){

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < m; j++){

            *(dst + j*n + i) = *(src + i*m + j);
        }
        
    }


}