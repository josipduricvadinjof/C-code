#include <stdio.h>


int main (void){

    int m;
    do{
        printf("Ucitajte red matrice> ");
        scanf("%d", &m);
    
    }while(m < 1 || m > 10);
    
    int matrica[m][m];

    printf("Ucitajte %d elemenata cjelobrojne matrice > ", m*m);
    
    for(int i = 0; i < m; i++){
    
        for(int j = 0; j < m; j++){
            
            scanf("%d", &matrica[i][j]);
    
        }
            
    }
    printf("\n");
    printf("Ucitana matrica:\n");

    for(int i = 0; i < m; i++){
    
        for(int j = 0; j < m; j++){
            
           printf("%4d", matrica[i][j]);
    
        }
        printf("\n");
            
    }

    //transponirana matrica
    int temp;
    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < m; j ++){
            temp = matrica[i][j];
            matrica[i][j] = matrica[j][i];
            matrica[j][i] = temp;
        }
    }

    //zamjenit retke 
    for(int i = 0; i < m / 2; i++){
        for(int j = 0; j < m; j ++){
            temp = matrica[i][j];
            matrica[i][j] = matrica[m - i - 1][j];
            matrica[m - 1 - i][j] = temp;
        }
    }
    
    printf("Matrica rotirana ulijevo:\n");

    for(int i = 0; i < m; i++){
    
        for(int j = 0; j < m; j++){
            
           printf("%4d", matrica[i][j]);
    
        }
        printf("\n");
            
    }

    int minus = 0;
    int plus = 0;

    for(int i = 0; i < m; i++){
    
        for(int j = 0; j < m; j++){
            
           if(matrica[i][j] < 0){
            minus++;
           }

           if(matrica[i][j] > 0){
            plus++;
           }

        }
            
    }

    printf("Pozitivnih: %d\n", plus);
    printf("Negativnih: %d", minus);







    return 0;
}