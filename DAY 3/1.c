//find the factorial of number
#include<stdio.h>
long long int fact(int n){
    if(n==1|| n==0)
    return n;
    return n*fact(n-1);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<0)
    printf("Fact not possible");
    else
    printf("fact is:%lld",fact(n));
    
    return 0;
}