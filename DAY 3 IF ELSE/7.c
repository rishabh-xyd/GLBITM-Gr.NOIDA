//print numbers form N to 1
#include<stdio.h>
void printNumber(int n){
    if(n==0)
    return;
    printf("%d ",n);
    printNumber(n-1);
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printNumber(n);
}