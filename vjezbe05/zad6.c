#include <stdio.h>

int main (void){

    int m, n, mpovrhn, brojnik =1, nazivnik1 =1, nazivnik2 =1, i = 1;
    printf("Upisite m i n >");
    scanf("%d %d", &m, &n);
    
    if (m < 0 ||  n <0 ||  m < n ) {

        printf("m ili n su neispravni");

    } else {

        while (i <= m)
        {
            brojnik = brojnik * i;
            i++;
        }

        i = 1;
        while (i <= n)
        { 
            nazivnik1 = nazivnik1 * i;
            i++;
        }
         
        i = 1;
        while (i <= m-n)
        { 
            nazivnik2 = nazivnik2 * i;
            i++;
        }
        
        
    }

    mpovrhn = brojnik / (nazivnik1 * nazivnik2); 

    printf("%d povrha %d je: %d",m, n, mpovrhn);


    return 0;

  
    
} 