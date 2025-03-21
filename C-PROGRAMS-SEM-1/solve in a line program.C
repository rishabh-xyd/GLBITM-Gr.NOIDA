#include<stdio.h>
#include<conio.h>
int main(){

int a,l,b,r,base,height;
clrscr();
printf("enter side of the squre:");
scanf("%d",&a);
printf("\narea of squre:%d",a*a);
printf("\nperimeter of squre:%d",4*a);
printf("\nenter length and breadth of rectangle");
scanf("%d %d",&l,&b);
printf("\narea of rectangle:%d",l*b);
printf("\nperimeter of rectangle:%d",2*(l+b));
printf("\nenter the radius of circle:");
scanf("%d",&r);
printf("\nArea of circle:%f",3.14*r*r);
printf("\nCircumference of circle:%f",2*3.14*r);
printf("\nenter the base and height of tringle:");
scanf("%d %d",&base, &height);
printf("\n area of tringle : %d",(base*height)/2);
getch();
return 0;
}