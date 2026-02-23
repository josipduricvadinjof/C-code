#include <stdio.h>

int binarni_palindrom(unsigned int n){
    
    unsigned int obrnuto = 0;


    for (int i = 0; i < 32; i++) {
        if (n & (1 << i)) {
            obrnuto |= (1 << (31 - i));
        }
    }

    if(n == obrnuto){
        return 1;
    } else{
        return 0;
    }

}



int main (void){

    unsigned int n;
    printf("Upisite broj > ");
    scanf("%u", &n);

    if(binarni_palindrom(n) == 1){
        printf("Broj je binarni palindrom.");
    }

    if(binarni_palindrom(n) == 0){
        printf("Broj nije binarni palindrom.");
    }





    return 0;
}