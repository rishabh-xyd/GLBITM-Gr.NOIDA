//WAP to check whether a character is an alphabet, digit or special character
#include<stdio.h>
#include<ctype.h>//for isalpha and isdigit
int main(){
    char type;
    printf("Enter a character: ");
    scanf("%c",&type);
    if(isalpha(type))
    printf("Alphabetic Character");
    else if(isdigit(type))
    printf("DIGIT");
    else
    printf("Special Character");
    return 0;
}