// WAP to find the eligibility of admission for a course based on folllowing creteria

#include<stdio.h>
int main()
{
    int math, phy, chem, total;
    printf(" enter the three subjeccts marks :");
    scanf("%d %d %d",&math,&phy,&chem);

    total  =  math +phy+chem;

    if(math>=65 && phy>=55 && chem>=50 && total>=180){
        printf(" tghe candidate is eligible");

    }

    else if ((math+phy)>=140)
    {
        printf(" eligible");

    }

    else
    {
        printf(" not eligible");
    }

    return 0;
}