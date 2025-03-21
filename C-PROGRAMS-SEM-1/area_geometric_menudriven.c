#include<stdio.h>
int main(){
    int choice;
    float area;
    printf("enter choice\n1 for Area of circle\n2 for Area of tringle\n3 for Area of squre");
    scanf("%d",&choice);
    switch(choice){
        case 1:
        printf("you seleted to calculate area of circle\nenter the radius of circle:");
        float r;
        scanf("%f",&r);
         area = 3.14*r*r;
        printf("area of circle is %f",area);
        break;
        case 2:
        printf("you seleted to calculate area of triangle\nenter the base and height of triangle:");
        float b,h;
        scanf("%f%f",&b,&h);
         area = 0.5*b*h;
        printf("area of tringle is:%f",area);
        break;
        case 3:
        printf("you seleted to calculate area of square\nenter the side of square:");
        float s;
        scanf("%f",&s);
        area = s*s;
        printf("area of square is:%f",area);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}