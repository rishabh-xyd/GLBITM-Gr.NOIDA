#include<stdio.h>
void main(){
    int n;
    printf("Enter a maximum number to print: ");
    scanf("%d",&n);
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int mindist=i;      //top
            if(j<mindist)       //left
            mindist=j;
            if(size-i-1<mindist)        //bottom
            mindist=size-i-1;
            if(size-j-1<mindist)        //right
            mindist=size-j-1;
            printf("%d ",n-mindist);
        }
        printf("\n");
    }




}