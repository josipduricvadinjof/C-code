#include <stdio.h>

int nulovanje(int *mat, int m, int n){

    int max = *(mat + 0*n + 0);
    int maxi = 0;
    int maxj = 0;
    int sumaprije = 0;
    int sumaposlje = 0;
    int suma;

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            sumaprije += *(mat + i*n + j);


        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            if (mat[i*n + j] > max ||
               (mat[i*n + j] == max && i > maxi) ||
               (mat[i*n + j] == max && i == maxi && j < maxj)){
                max = *(mat + i*n + j);
                maxi = i;
                maxj = j;
            }


        }
    }

    //sad iman max vrijednost, njen indeks retka i stupca

    for(int i = 0; i < m; i++){
        int j = maxj;
        *(mat + i*n + j) = 0;
    }

    for(int j = 0; j < n; j++){
        int i = maxi;
        *(mat + i*n + j) = 0;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){

            sumaposlje += *(mat + i*n + j);


        }
    }

    suma = sumaprije - sumaposlje;

    return suma;

    
    

}