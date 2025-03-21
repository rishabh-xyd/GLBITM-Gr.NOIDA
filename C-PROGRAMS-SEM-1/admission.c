//WAP to determine eligibilty for addmission
#include<stdio.h>
int main(){
    int p,c,m,total=0;
    printf("\nenter the marks of physics:");
    scanf("%d",&p);
    printf("\nenter the marks of chemistry:");
    scanf("%d",&c);
    printf("\nenter the marks of maths:");
    scanf("%d",&m);
    if(p>=55&&c>=50&&m>=65){
        printf("\nyou are eligible");
    }
    else if((m+p+c)>=190||(m+p)>=140)
        printf("\nyou are eligible");
    else
        printf("\nyou are not eligible");
    return 0;
}