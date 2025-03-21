//to display the n terms of even odd natural number and there sum
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        if(i%2==0){
        printf("%d\t",i);
        sum+=i;
        }
    }
    printf("\nSum of these odd numbers: %d",sum);
    return 0;
}