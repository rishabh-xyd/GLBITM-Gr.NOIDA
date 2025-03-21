//calculate profit and loss
#include<stdio.h>
int main(){
    float CP,SP;
    printf("Enter the cost price of the item: ");
    scanf("%f",&CP);
    printf("Enter the selling price of the item: ");
    scanf("%f",&SP);
    if(SP>CP)
    printf("\nProfit:%f",SP-CP);

    else if(SP<CP)
    printf("\nLoss:%f",CP-SP);

    else
    printf("\nNo profit no loss");
    return 0;
}
