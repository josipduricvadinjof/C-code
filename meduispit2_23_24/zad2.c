# include <stdio.h>
# define MAX_NIZ 20

int main (void){



    printf("Unesite prvi niz > ");
    char niz1[MAX_NIZ];
    fgets(niz1, sizeof(niz1), stdin);


    printf("Unesite drugi niz > ");
    char niz2[MAX_NIZ];
    fgets(niz2, sizeof(niz2), stdin);

    
    int len1 = 0;
    for (int i = 0; i < MAX_NIZ; i++) {
        if (niz1[i] == '\0')
            break;
        len1++;
    }

    for (int i = 0; i < len1; i++) {
        if (niz1[i] == '\n') {
            niz1[i] = '\0';
            len1--;
            break;
        }      
    }


    int len2 = 0;
    for (int i = 0; i < MAX_NIZ; i++) {
        if (niz2[i] == '\0')
            break;
        len2++;
    }

    for (int i = 0; i < len2; i++) {
        if (niz2[i] == '\n') {
            niz2[i] = '\0';
            len2--;
            break;
        }      
    }

    //ubrnut niz2
    int temp;

    for(int i = 0; i < len2 / 2; i++){
        
        temp = niz2[i];
        niz2[i] = niz2[len2 - 1 - i];
        niz2[len2 - 1 - i] = temp;
        
    }

    char niz[len1 + len2];

    for(int i = 0; i < len1; i++){
        niz[i] = niz1[i];
    }

    for(int i = 0; i < len1 + len2; i++){
        niz[len1 + i] = niz2[i];
    }

    printf("Spojeni niz > ");

    for(int i = 0; i < len2 + len1; i++){
        printf("%c", niz[i]);
    }




 return 0;
}