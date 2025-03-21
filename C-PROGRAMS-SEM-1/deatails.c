//WAP to read roll number,marks of three subjects and calculte the total,percentage,divison
#include<stdio.h>
int main(){
    int roll,maths,chem,phy,total;
    float perc;
    char name[20];
    printf("Enter name:");
     scanf("%[^\n]%*c", name);
    printf("Enter roll number:");
    scanf("%d",&roll);
    printf("Enter marks of maths:");
    scanf("%d",&maths);
    printf("Enter marks of chemistry:");
    scanf("%d",&chem);
    printf("Enter marks of physics:");
    scanf("%d",&phy);
    total=phy+chem+maths;
    perc=(total/300)*100;
    if(perc>=80)
    printf("Divsion: I");
    else if(perc>=60)
    printf("Divsion: II");
    else if(perc>=40)
    printf("Divsion: III");
    else
    printf("Divsion: IV");
    return 0;



}