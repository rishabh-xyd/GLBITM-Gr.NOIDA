//factorialusing loops
#include<stdio.h>
int main(){
    int num,fact;
    printf("Enter a number: ");
    scanf("%d",&num);
    fact=1;
    for(int i=1;i<=num;i++)
    {
        fact=fact*i;

    printf("%d \t",fact);
    }
    printf("\nThe factorial of %d is: %d",num,fact);
    return 0;
}