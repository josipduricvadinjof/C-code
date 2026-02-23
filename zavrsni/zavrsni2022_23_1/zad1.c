#include <stdio.h>

float zamijeniRetke(float *polje, int brRed, int brStup, int indRed1, int indRed2){

    
    
    for(int j = 0; j < brStup; j++){
        
        float temp;
        temp = *(polje+indRed1*brStup + j);
        *(polje+indRed1*brStup + j) = *(polje+indRed2*brStup + j);
        *(polje+indRed2*brStup + j) = temp;
        
        
        
    }
    
    float suma1 = 0; 
    float suma2 = 0;
    float razlika;

    
        for(int j = 0; j < brStup; j++){
            suma1 += *(polje+indRed1*brStup + j);
            suma2 += *(polje+indRed2*brStup + j);
        }
    
    if(indRed1 > indRed2){
        razlika = suma1 - suma2;
    } else{
        razlika = suma2 - suma1;
    }
    
    
        return razlika;
    

    



}