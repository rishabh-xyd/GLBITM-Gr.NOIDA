// Print the grade based upon the marks
#include<stdio.h>
int  main(){
    int marks;
    printf("enter the marks: ");
    scanf("%d",&marks);
    switch(marks/10){
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        case 5:
        printf("F");
        break;
        default:
        printf("please enter valid marks");
    }
    return 0;
}