//WAP to print week days names using switch case
#include<stdio.h>
int main(){
    int day;
    printf("enter the the day(int value):");
    scanf("%d",&day);
    switch(day){
        case 0:
        printf("SUNDAY");
        break;
        case 1:
        printf("MONDAY");
        break;
        case 2:
        printf("TUESDAY");
        break;
        case 3:
        printf("WEDNESDAY");
        break;
        case 4:
        printf("THURSDAY");
        break;
        case 5:
        printf("FRIDAY");
        break;
        case 6:
        printf("SATURDAY");
        break;
        default:
        printf("invalid week day input");
    }
    return 0;
}