#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t,amt,n,CI;
    printf("\nenter principle:");
    scanf("%f",&p);
    printf("\nenter rate: ");
    scanf("%f",&r);
    printf("\nenter number of times interest is compounded per year: ");
    scanf("%f",&n);
    printf("\nenter time (in years): ");
    scanf("%f",&t);
    amt=p*pow((1+r/n),n*t);
    printf("\n amt:%f",amt);
    CI=amt-p;
    printf("\ncoumpund interst:%f",CI);
    return 0;



}
