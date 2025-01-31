#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    printf("enter the charater:");
    scanf("%c",&ch);
    if(isupper(ch))
    printf("the character is in Uppercase");
    else if(islower(ch))
    printf("the character is in Lowercase");
    else
    printf("invalid character");
}