#include<stdio.h>
#include<ctype.h>
void main(){
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch<='z'&&ch>='a')
    switch(ch){
        case 'a':
        printf("Vowel");
        break;
        case 'e':
        printf("Vowel");
        break;
        case 'i':
        printf("Vowel");
        break;
        case'o':
        printf("Vowel");
        break;
        case 'u':
        printf("Vowel");
        break;
        default:
        printf("Consonet");
        break;
    }
    else
    printf("Not a Alphabet");
}