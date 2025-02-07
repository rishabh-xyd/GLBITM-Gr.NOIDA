//print nth term of fibonacci series
#include<stdio.h>
int fib(int n){
    if(n==1)
    return n;
    else
    return n*fib(n-1);
}
int main(){
    int n;
    printf("enter the term:");
    scanf("%d",&n);
    if(n<0)
    printf("enter the positive number");
    else
    printf("the number is :%d",fib(n));

    return 0;
}