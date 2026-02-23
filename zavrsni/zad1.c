#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>



void generiraj_vektor(double *vektor, int n){

    

    for(int i = 0; i < n; i++){
        *(vektor + i) = (double)rand() / RAND_MAX; 
    }
}




int main() {
    srand(500U);
    int n;
    printf("Unesite dimenziju vektora: ");
    scanf("%d", &n);
   
    double a[n], b[n];
    
    generiraj_vektor(a,n);
    generiraj_vektor(b,n);
    
    // ispis vektora
    printf("\nVektor 1: ");
    for (int i = 0; i < n; i++) printf("%.2f ", a[i]);
    
    printf("\nVektor 2: ");
    for (int i = 0; i < n; i++) printf("%.2f ", b[i]);
    printf("\n");
    
    //definicija potrebnih varijabli i računanje euklidske sličnosti
    double euklidskaSlicnost;
    double sumavek = 0;
    double sumaa2 = 0;
    double sumab2 = 0;

    for(int i = 0; i < n; i++){
        sumavek += a[i] * b[i];
        sumaa2 += a[i] * a[i];
        sumab2 += b[i] * b[i];
    }

    euklidskaSlicnost = sumavek / (sqrt(sumaa2)*sqrt(sumab2));
       
    
    printf("Euklidska slicnost: %.2f\n", euklidskaSlicnost);
    
    return 0;
}











