//palindrome
#include<stdio.h>
void palindrom(int n){
    int rev=0;
    int x = n;
    while (n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }

    if(x==rev)
    printf("number is pallindrome");
    else
    printf("number is not a pallindrome");    
}
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0)
    printf("Negsative can not be a pallindorm");
    else
    palindrom(n);

}