#include<stdio.h>
void main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++)
        printf("  ");
        for(int j=0;j<2*n-2*i;j++){
            
        if(j%2!=0)
        printf("  ");
        else
        printf("* ");
        }
        printf("\n");
    }

}