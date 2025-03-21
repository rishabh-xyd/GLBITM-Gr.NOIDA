//count the digits of a number
#include<stdio.h>
int countDigits(int n){
    if(n==0)
    return 0;
    else
    return 1+countDigits(n/10);
}
void main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    printf("the output is:%d",countDigits(n));
}