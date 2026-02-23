#include <stdio.h>

int main(void) {
    
    int znamenke[40] = {1,1};

    for (int i = 2; i < 40; i++) {

        znamenke[i] = znamenke[i-1] + znamenke[i-2];
        
    }

    for (int j = 0; j < 40; j++) {

        printf("%d, ", znamenke[j]);
        
    }

    
    
    return 0;
}
