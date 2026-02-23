#include <stdio.h>
#include <ctype.h>
#include <string.h>

unsigned int checkPassword(char *password, int minLength, int minUppercase, int minLowercase, int minDigits, int minSpecialChars){

    int rezultat = 0;
    int digits = 0;
    int lower = 0;
    int specialChars = 0;
    int uppercase = 0;
    
    
    
    int length = strlen(password); //dela

    for(int i = 0; password[i] != '\0'; i++){

        

        if(isdigit(*(password + i))  ){
            digits++;
        }

        if(islower(*(password + i)) ){
            lower++;
        }

        if(isupper(*(password + i)) ){
            uppercase++;
        }

        if(*(password + i) == '!' || 
        *(password + i) == '@' || 
        *(password + i) == '$' || 
        *(password + i) == '%' || 
        *(password + i) == '^' || 
        *(password + i) == '&' || 
        *(password + i) == '*' || 
        *(password + i) == '+' || 
        *(password + i) == '#'){
            specialChars++;
        }


        
    }

    if(length < minLength){
        rezultat++;
    } 

    if(uppercase < minUppercase){
        rezultat = rezultat + 2;
    } 

    if(lower < minLowercase){
        rezultat = rezultat + 4;
    } 

    if(digits < minDigits){
        rezultat = rezultat + 8;
    } 

    if(specialChars < minSpecialChars){
        rezultat = rezultat + 16;
    }


    return rezultat;




}



int main()
{
    int minLength, minUppercase, minLowercase, minDigits, minSpecialChars;
    char password[100];
    
    printf("Unesite minLength, minUppercase, minLowercase, minDigits, minSpecialChars: ");
    scanf("%d %d %d %d %d", &minLength, &minUppercase, &minLowercase, &minDigits, &minSpecialChars);
    printf("Unesite lozinku: ");
    scanf("%s", password);
    
    printf("%d", checkPassword(password, &minLength, &minUppercase, &minLowercase, &minDigits, &minSpecialChars) ); 
    return 0;
}