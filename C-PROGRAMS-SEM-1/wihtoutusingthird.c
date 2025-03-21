#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the two value \n");
    scanf("%d %d", &x,&y);
    x = x + y; 
    y = x - y; 
    x = x - y;
    printf("\nthen value of a and b after swapping %d %d",x,y);
    return 0;
}