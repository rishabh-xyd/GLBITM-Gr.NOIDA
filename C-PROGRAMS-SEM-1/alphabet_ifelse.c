// check characeter is alphabet or not
#include<stdio.h>
#include<ctype.h>
int main()
{
    char type;
    printf("Enter a character: ");
    scanf("%c", &type);
    if(isalpha(type))
    printf("the given characeter is alphabet");
    else
    printf("it is not an alphabet");
    return 0;
}