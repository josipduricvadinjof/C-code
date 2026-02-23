#include <stdio.h>


void sort1D(int n, int *mat, char sort){

    if(sort == 'S' || sort == 's'){

       

        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n ; j++){

                int pomocna;

                if(*(mat + i) <= *(mat + j)){
                    pomocna = *(mat + i);
                    *(mat + i) = *(mat + j);
                    *(mat + j) = pomocna;
                }
            }
            
        }
    }else{

        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n ; j++){

                int pomocna2;

                if(*(mat + i) >= *(mat + j)){
                    pomocna2 = *(mat + i);
                    *(mat + i) = *(mat + j);
                    *(mat + j) = pomocna2;
                }
            }
            
        }

    }

    for(int i = 0; i < n; i++){
        printf("%d", *(mat + i));
    }

}






int main (void){

    int n;
    char sort;

    printf("Unesite smjer poretka (S-silazno) > ");
    scanf(" %c", &sort);

    printf("Upisite dimenziju > ");
    scanf("%d ", &n);

    int mat[n];

    printf("Upisite clanove > ");
    for (int i = 0; i < n; i++){

        scanf("%d", &mat[i]);

    }

    


    sort1D(n, &mat[0], sort);



    return 0;
}