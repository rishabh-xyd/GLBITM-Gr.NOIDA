//  1234321
//   12321
//    121
//     1

#include<stdio.h>
int downside(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)
        printf(" ");
        for(int j=0;j<n-i;j++)
        printf("%d",j+1);
        for(int j=n-i-1;j>0;j--)
        printf("%d",j);


        printf("\n");
    }
}



    
int main(){



    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);

    downside(n);
}