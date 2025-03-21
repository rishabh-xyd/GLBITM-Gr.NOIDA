//1+1/2+1/3+1/4+...................1/n
//print these series and sum as well
#include<stdio.h>
int main(){
    float n,i;
    float sum=0;
    printf("Enter the value of n:");
    scanf("%f",&n);
    for( i=1;i<=n;i++){
        printf("1/%f+",i);
        sum=sum+1.0/i;
    }
    printf("\nsum is :%f",sum);
    return 0;

}