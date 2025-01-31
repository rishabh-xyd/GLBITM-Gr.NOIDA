#include<stdio.h>
void main(){
    int choice,a,b,c;
    printf("Enter the choice for inputing \n 1 for angles\n 2 for sides:");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("Enter the angles of tringle:");
        scanf("%d%d%d",&a,&b,&c);
        if(a>0&&b>0&&c>0&&a+b+c==180)
        printf("Tringle is valid");
        else
        printf("Tringle is not valid");
        break;
        case 2:
        printf("Enter the sides of tringle:");
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c&&a+c>b&&c+b>a)
        printf("Tringle is valid");
        else
        printf("Tringle is not valid");
        break;
    }
    
}