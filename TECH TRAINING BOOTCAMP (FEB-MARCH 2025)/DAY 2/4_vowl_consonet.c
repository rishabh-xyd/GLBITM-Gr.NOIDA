#include<stdio.h>
#include<ctype.h>

void main(){
    char alph;
    printf("Enter the alphabet: ");
    scanf("%c",&alph);
    alph=tolower(alph);
    if(alph<='z'&&alph>='a')
    {
        if(alph=='a'||alph=='e'||alph=='i'||alph=='o'||alph=='u')
        printf("The character is vowel");
        else
        printf("The character is consonent");
    }
    else
    printf("Not an alphabet");
}