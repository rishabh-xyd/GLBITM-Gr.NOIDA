#include<stdio.h>
int main()
{
    int a;
    printf("enter a interger number :");
    scanf("%d",&a);
    if(a%2==0)
    printf("\nThe given number %d is even",a);
    else
    printf("\nThe given number %d is ODD",a);
    return 0;

}