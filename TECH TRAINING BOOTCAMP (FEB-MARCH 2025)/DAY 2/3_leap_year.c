#include<stdio.h>
void nestedif(int y){
    if(y%4==0)
    {
        if(y%100==0)
        {
            if(y%400==0)
            printf("Leap year");
            else
            printf("Not a leap year");
        }
        else
        printf("Leap year");
    }
    else 
    printf("Not a leap year");
}
void ladder(int y){
    if(y%400==0)
    printf("Leap year");
    else if(y%100==0)
    printf("Not a leap year");
    else if(y%4==0)
    printf("Leap year");
    else
    printf("Not a leap year");
}
void normal(int y){
    if((y%4==0&&y%100!=0)||(y%400==0))
    printf("leap year");
    else
    printf("not a leap year");
}
void main(){
    int y;
    printf("enter the year: ");
    scanf("%d",&y);
    int c;
    printf("enter the way you need a program to solve it \n1 for nestedif\n2 for ladder\n3 for noraml if else:");
    scanf("%d",&c);
    switch (c)
    {
    case 1:
        nestedif(y);
        break;
        case 2:
        ladder(y);
        break;
        default:
        normal(y);
        break;
    }

}