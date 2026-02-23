#include <stdio.h>
#include <stdlib.h>

int main (void){

    printf("upisite velicinu polja > ");
    int n;
    scanf("%d", &n);

    printf("upisite elemente polja > ");
    int polje[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &polje[i]);
    }

    
    int minrazlika = abs(polje[0] - polje[1]);
    int brojac = 0;

    for(int i = 0; i < n; i++){
        for(int k = i + 1; k < n; k++){

            if(polje[k] <= n - 1);{
    
    
                if(abs(polje[i] - polje[k]) < minrazlika){
                    minrazlika = abs(polje[i] - polje[k]);
                }
        
            }
            
        }
        
    }


    for(int i = 0; i < n; i++){
        for(int k = i + 1; k < n; k++){

            if(minrazlika == abs(polje[i] - polje[k])){
                brojac++;
            }
            
        }
        
    }
   

    printf("najmanji razmak: %d\n", minrazlika);
    printf("broj parova: %d", brojac);


    return 0;
}