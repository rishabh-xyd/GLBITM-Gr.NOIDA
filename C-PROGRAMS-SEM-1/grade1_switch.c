//WAP to accept Grade and declare result
#include<stdio.h>
int main(){
    char grade;
    printf("Enter the grade:");
    scanf("%c",&grade);
    switch(grade){
        case 'E':
        printf("Excellent"); 
        break;       
        case 'V':
        printf("Very Good");  
        break;      
        case 'G':
        printf("Good");      
        break;  
        case 'A':
        printf("Average");  
        break;      
        case 'F':
        printf("Fail");
        break;
        default:
        printf("enter valid grade");        
    }
    return 0;
}