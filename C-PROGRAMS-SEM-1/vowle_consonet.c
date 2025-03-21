// check whether it is vowel or consonent
#include<stdio.h>
int main()
{
    char type;
    printf("enter the charcater: ");
    scanf("%c",&type);
    if(type=='a'||type=='e'||type=='i'||type=='o'||type=='u'||type=='A'||type=='E'||type=='I'||type=='O'||type=='U')
    printf("it is VOWEL");
    else
    printf("consonent");
    return 0;
}