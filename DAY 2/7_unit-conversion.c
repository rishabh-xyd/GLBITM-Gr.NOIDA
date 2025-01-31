#include<stdio.h>
void main(){
    int type,unit;
    printf("Enter the type of unit\n 1 for cm\n 2 for grams:\n");
    scanf("%d",&type);
    switch (type)
    {
    case 1:
        printf("Enter in cm:");
        scanf("%d",&unit);
        printf("Unit conversion from %d cm to %d m",unit,unit/100);
        break;
    
        case 2:
          printf("Enter in grams:");
        scanf("%d",&unit);
        printf("Unit conversion from %d g to %d kg",unit,unit/1000);
        break;
    }
}