//sum of n natural number
#include<stdio.h>
int sum(int n){
    if(n==0)
    return 0;
    else
    return n+sum(n-1);
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<0)
    printf("enter positive number");
    else
    printf("the sum of the given natural number is:%d",sum(n));
    return 0;
}