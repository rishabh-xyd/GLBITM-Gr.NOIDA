//     1
//    121
//   12321
//  1234321

#include<stdio.h>
int upside(int n){
    
for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        printf(" ");
        for(int j=0;j<=i;j++)
            printf("%d",j+1);
        
        for(int j=i;j>0;j--)
            printf("%d",j);

       
        printf("\n");
}
}
int main(){
    int n;
    printf("enter the number of rows: ");
    scanf("%d",&n);
    upside(n);
}