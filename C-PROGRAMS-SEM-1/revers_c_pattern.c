// reverse C
//  ****
//     *
//  **** 
#include<stdio.h>
int main()
{
    int n=3;
    for(int i=0;i<n;i++){
        for(int j=0; j<n+1;j++){
            if(i==0||i==n-1)
            printf("*");
            else if(j==n)
            printf("*");
            else
            printf(" ");
        }
    printf("\n");
    }
}
