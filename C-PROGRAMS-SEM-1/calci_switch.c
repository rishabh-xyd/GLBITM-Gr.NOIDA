// Design a calcultor with all basic arithmetic operaitions
#include<stdio.h>
int  main(){
    int num1,num2;
    char operand;
    printf("enter the NUM1: ");
    scanf("%d",&num1);
    printf("\nenter the NUM2: ");
    scanf("%d",&num2);
    printf("\nenter the operator: ");
    scanf(" %c",&operand);
    switch(operand){
        case '+':
        printf("%d",num1+num2);
        break;
        case '-':
        printf("%d",num1-num2);
        break;
        case '*':
        printf("%d",num1*num2);
        break;
        case '/':
        printf("%d",num1/num2);
        break;
        default:
        printf("\nplease enter valid inputs");
    }
    return 0;
}