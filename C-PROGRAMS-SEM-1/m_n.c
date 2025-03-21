//Wap to read the value of an integer m and dispaly the value of n=1 when m is larger than 0,0 when m is 0,-1 when m is less than 0
#include<stdio.h>
int main(){
    int m,n;
    printf("enter the integer value:");
    scanf("%d",&m);
    if(m>0){
        n=1;
    printf("n:%d",n);
    }
    else if(m==0){
        n=0;
    printf("n:%d",n);
    }
    else
	{
        n=-1;
    printf("n:%d",n);
    }
    return 0;
}
