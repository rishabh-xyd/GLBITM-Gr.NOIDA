//WAP to read number from user and find there sum and the avg
#include<stdio.h>
int main(){
    int num,r,count=0,sum = 0,i,avg;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        r=num%10;
        num/=10;
        sum=sum+r;
    
    }
        printf("Sum of digits of the number is: %d", sum);
        avg=sum/(i-1);
        printf("\nAvg of digits of the number is: %d", avg);
    return 0;
}