//armstrong number
#include<stdio.h>
#include<math.h>
int armstorng(int n){
    int sum=0,rem,num=n;
    while(n>0){
        rem=n%10;
        // sum=sum+pow(rem,3);
        sum=sum+rem*rem*rem;
        n=n/10;
    printf("%d  ",sum);
    }
    printf("the sum %d  ",sum);
    if(sum==num)
    printf("Yes");
    else
    printf("no");
}
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    armstorng(num);
}