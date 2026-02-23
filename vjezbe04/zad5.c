#include<stdio.h>

int main(void){

    int dan, mjesec, godina;
    printf("Upisite dan, mjesec i godinu >");
    scanf("%d %d %d", &dan, &mjesec, &godina);


    printf("%d. ", dan);

    switch (mjesec) {

        case 1:
            printf("sijecanj");
            break;

        case 2:
            printf("veljaca");
            break;

        case 3:
            printf("ozujak");
            break;

        case 4:
            printf("travanj");
            break;

        case 5:
            printf("svibanj");
            break;

        case 6:
            printf("lipanj");
            break;

        case 7:
            printf("srpanj");
            break;

        case 8:
            printf("kolovoz");
            break;

        case 9:
            printf("rujan");
            break;

        case 10:
            printf("listopad");
            break;

        case 11:
            printf("studeni");
            break;

        case 12:
            printf("prosinac");
            break;

    }

    printf(" %d.", godina);


    
   
    
 
    return 0;
}