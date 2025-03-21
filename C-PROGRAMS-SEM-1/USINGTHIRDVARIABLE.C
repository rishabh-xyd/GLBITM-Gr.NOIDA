#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the two value \n");
    scanf("%d %d", &a,&b);
    c= a;
    a=b;
    b= c;
    printf("then valueof a and b after swapping %d %d",a,b);
    return 0;
}