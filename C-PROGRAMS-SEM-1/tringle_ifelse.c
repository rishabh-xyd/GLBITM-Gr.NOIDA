// Check whether the tringle is equilateral, scalean or isoceleous
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("enter side 1:");
    scanf("%d",&s1);
    printf("enter side 2:");
    scanf("%d",&s2);
    printf("enter side 3:");
    scanf("%d",&s3);
    if((s1==s2)&&(s2==s3))
    printf("tringle is equilateral");
    else if((s1==s2)||(s2==s3)||(s1==s3))
    printf("triangle is isosceles");
    else if((s1!=s3&&s2!=s3))
    printf("triangle is scalene");
    else
    printf("invalid input");
    return 0;
}