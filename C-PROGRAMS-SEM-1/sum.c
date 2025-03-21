//sum of n natural numbers
#include<stdio.h>
int main(){
    int num,s=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i=1;i<=num;i++){
        s=s+i;
    }
        printf("%d ",s);
}