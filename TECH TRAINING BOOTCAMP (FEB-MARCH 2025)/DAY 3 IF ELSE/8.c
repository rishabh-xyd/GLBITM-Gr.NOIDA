//power of two
#include<stdio.h>
long long int powerOfTwo(int n){
    if(n==1)
    return 2;
    else
    return 2*powerOfTwo(n-1);
}
void main(){
    int n;
    printf("Enter the power: ");
    scanf("%d",&n);
    if(n==0)
    printf("the output will be 1");
    else
    printf("The output is:%lld",powerOfTwo(n));

}