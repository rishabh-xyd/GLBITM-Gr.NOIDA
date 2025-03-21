// to display the series and its sum
// 9+99+999+9999+.............
#include<stdio.h>
int main(){
    int num,sum=0,t,GP;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter the number of terms in the series: ");
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        GP=GP*10+num;
        printf("%d + ",GP);
        sum+=GP;
    }
    printf("\nsum is: %d",sum);
    return 0;
}