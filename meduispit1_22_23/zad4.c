#include <stdio.h>

int main (void){

    char ulaz[31];
    printf("Upisite ulazni niz > ");
    fgets(ulaz, sizeof(ulaz), stdin);

    int len = 0;
    for (int i = 0; i < 31; i++) {
        if (ulaz[i] == '\0')
            break;
        len++;
    }

    char izlaz[31];
    int k = 0;

    for(int i = 0; i < len; i++){

        if (ulaz[i] >= 'a' && ulaz[i] <= 'z') {

            int postoji = 0;  

    
            for (int j = 0; j < k; j++) {
                if (izlaz[j] == ulaz[i]) {
                    postoji = 1;
                    break;
                }
            }

    
            if (!postoji) {
             izlaz[k++] = ulaz[i];
            }
        }

    }
    
    printf("Izlaz: %s\n", izlaz);
    printf(" Ulaz: %s", ulaz);

return 0;
}