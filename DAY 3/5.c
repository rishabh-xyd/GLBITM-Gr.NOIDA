//print 1 to n
#include<stdio.h>
void printnum(int curr,int n){
    
    if(curr>n)
    return;
    printf("%d ",curr);
    return printnum(curr+1,n);
}
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    if(n<=0)
    printf("please enter number bigger than 1");
    else
    printnum(1,n);
    return 0;
}