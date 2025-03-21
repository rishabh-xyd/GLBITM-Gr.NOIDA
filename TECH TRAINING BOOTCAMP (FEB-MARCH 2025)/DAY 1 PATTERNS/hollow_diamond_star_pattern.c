#include<stdio.h>
int upside(int n){
    
for(int i=0;i<n;i++){
    for(int j=0;j<n+1;j++){
        printf("* ");
        // for(int j=0;j<i;j++)
        
    
    }
    printf("\n");
}
}
   int downside(int n){
    
        for(int i=1;i<n;i++){
        for(int j=0;j<i;j++)
        printf("  ");
        for(int j=0;j<2*n-2*i-1;j++){
        if(j==0||j==2*n-2*i-2)
        printf("* ");
        else
        printf("  ");      
        }
        printf("\n");
        }
    
    }
void main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    upside(n/2);
    downside((n/2));

}