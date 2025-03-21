//electricity bill
#include<stdio.h>
int main(){
    int custm_id,unit;
    char custm_name[20];
    float bill;
    printf("Enter customer name: ");
    scanf("%[^\n]%*c",custm_name);
    
    printf("Enter customer id: ");
    scanf("%d",&custm_id);
    printf("Enter the number of units consumed: ");
    scanf("%d", &unit);
    if(unit<=199)
    bill=unit*1.20;
    else if(unit<400)
    bill=unit*1.50;
    else if(unit<600)
    bill=unit*1.80;
    else
    bill=unit*2;
    printf("\nElectricity Bill\n");
    printf("Customer ID: %d\n", custm_id);
    printf("Customer Name: %s\n", custm_name);
    printf("Units Consumed: %d\n", unit);
    printf("Total Bill: Rs. %.2f\n", bill);
    return 0;
}