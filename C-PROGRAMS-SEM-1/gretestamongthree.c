//greatest among three using multiple ifelse
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the three value \n");
    scanf("%d %d %d", &a,&b,&c);

    if(a>b&&a>c)
    {
        printf("the greatest value is a %d", a);
    
    }
    else if(b>c)
    {
        printf("the greatest value is b %d", b);
    }
    else{
    printf("the greatest value is c %c", c);
    }
    return 0;

}