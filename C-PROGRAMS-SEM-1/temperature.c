//WAP to read temp in celsius and display a suitable message accordingly
#include<stdio.h>
int main(){
    int temp;
    printf("Enter temperature in celsius: ");
    scanf("%d",&temp);
    if(temp<0)
    printf("Frezing");
    else if(temp<=10)
    printf("Very Cold");
    else if(temp<=20)
    printf("Cold");
    else if(temp<=30)
    printf("Normal");
    else if(temp<=40)
    printf("Hot");
    else
    printf("Very Hot");
    return 0;
}