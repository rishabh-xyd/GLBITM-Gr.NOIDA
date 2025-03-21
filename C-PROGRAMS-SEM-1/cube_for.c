//to display the cube of the number upto n integer
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d^3 = %d\n",i,i*i*i);
    }
    return 0;
}