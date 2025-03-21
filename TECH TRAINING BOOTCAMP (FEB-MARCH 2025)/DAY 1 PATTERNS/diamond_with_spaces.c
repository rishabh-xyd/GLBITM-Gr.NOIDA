#include<stdio.h>
int upside(int n){
    
for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++)
        printf("  ");
        for(int j=0;j<2*i+1;j++){
            
        if(j%2!=0)
        printf("  ");
        else
        printf("* ");
        }
        printf("\n");
    }
}
   int downside(int n){
    
        for(int i=1;i<n;i++){
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
void main(){
    int n;
    printf("Enter the number of rows");
    scanf("%d",&n);
    upside(n/2);
    downside((n/2));

}