#include<stdio.h>
int printPrime(int n){
    int c;
        c=0;
    
        for(int j=1;j<=n;j++)
        {
            if(n%j==0)
            c++;
        }
        
        if(c==2)
        return 1;
        return 0;
}
void main(){
    int n;
    printf("enter the number u want to check: ");
    scanf("%d",&n);
    if(printPrime(n)==1)
    printf("Yes");
    else
    printf("no");
}