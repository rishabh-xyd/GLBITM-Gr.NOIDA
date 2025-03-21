//WAP to check the number is positive or not
#include<stdio.h>
int main(){
    int num;
    printf("enter the number:");
    scanf("%d",&num);
    if(num<0)
    printf("number is negative");
    else if(num>0)
    printf("number is positive");
    else
    printf("number is 0");
    return 0;
}