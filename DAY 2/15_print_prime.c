#include<stdio.h>
int printPrime(int n){
    int c;
    for(int i=2;i<=n;i++){
        c=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==2)
        printf("%d\t",i);
    }
}
void main(){
    int n;
    printf("enter the number till u wanna print prime numbers: ");
    scanf("%d",&n);
    printPrime(n);
}