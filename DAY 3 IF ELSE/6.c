//sum of the digits of a number
#include<stdio.h>
int sumOfDigits(int n){
    int sum = 0;
    if(n<=0)
    return 0;
    return (n%10)+sumOfDigits(n/10);
    
     
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Sum of the digits of the number is: %d",sumOfDigits(n));
    return 0;
}