# include <stdio.h>

int main (void){

    char niz[20];
    printf("Upisite niz > ");
    fgets(niz, sizeof(niz), stdin);


    for (int k = 0; k < 20; k++) {
        if (niz[k] == '\n') {
            niz[k] = '\0';
            break;
        }
    }

    int len = 0;
    for (int i = 0; i < 20; i++) {
        if (niz[i] == '\0')
         break;
        
         len++;
    }   

    int pozicija;
    printf("Upisite poziciju > ");
    scanf("%d", &pozicija);
    

    if(pozicija > len || pozicija < 1){
        printf("Neispravna pozicija");
        return 0;
    } else{

        

        for (int k = pozicija - 1; k < len; k++) {
            if (niz[k] >= 'A' && niz[k] <= 'Z'){
                niz[k] = niz[k] + 32;
            }
        }


        for (int k = pozicija - 1; k < len; k++) {
           if(niz[k] >= '0' && niz[k] <= '9'){
             niz[k] = 'X';
           }
        }


        for (int i = pozicija - 1; i < len; i++) {
            niz[i] = niz[i + 1]; 
               
        }
        
        len--;


    }
    printf("Rezultat: ");

    for (int k = 0; k < len; k++) {
            printf("%c", niz[k]);
        }

    





    return 0;
}
