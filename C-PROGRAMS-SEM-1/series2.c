//  1+1/2^3+1/3^3+1/4^3...........1/n^3

#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    float sum=0.0;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf(" 1/%d^3 +",i);
        sum+=1/pow(i,3);
    }
    printf("\nsum of the above GP is: %f",sum);
    return 0;
}