#include<stdio.h>
int main(){
    int a[5]={4,3,4,5};
    for(int i=0;i<4;i++)
{
    int count=0;
    for(int j=0;j<4;j++){
        if(a[i]=a[j]){
        count++;
        printf(" index value for %d :%d",a[i],j);
        }
        printf(" count %d \n",count);
    }
}
return 0;
}
