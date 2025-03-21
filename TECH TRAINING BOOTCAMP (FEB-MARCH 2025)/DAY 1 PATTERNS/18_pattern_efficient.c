#include<stdio.h>
void main(){
    int n;
    printf("Enter a maximum number to print: ");
    scanf("%d",&n);
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int top=i;
            int left=j;
            int bottom=size-i-1;
            int right=size-j-1;
          //find minimum distance
          int mindist=top;
          if(left<mindist) mindist=left;
          if(bottom<mindist) mindist=bottom;
          if(right<mindist) mindist=right;

            
            printf("%d ",n-mindist);
        }
        printf("\n");
    }
}