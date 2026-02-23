#include <stdio.h>

int dot_produkt(int *a, int *b, int n){
    
    int skalarniprodukt = 0;

    for(int i = 0; i < n; i++){
        skalarniprodukt += *(a + i) * *(b + i);
    }

    return skalarniprodukt;
}

void mat_vec_produkt(int *X, int *a, int n, int *ret){

    

    for(int i = 0; i < n; i++){
        
        for(int j = 0; j < n; j++){

            *(ret + i) +=  *(X + i*n + j) * *(a + j);
        }
        
    }


}