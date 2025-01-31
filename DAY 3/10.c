//reverse a string
#include<stdio.h>
#include<string.h>
void rev(char ch[],int i,int j){
    if(i>=j)
    return;
    
    char temp;
    temp=ch[i];
    ch[i]=ch[j];
    ch[j]=temp;
    rev(ch,i+1,j-1);
}
void main(){
    char ch[100];
    int i=0;
    printf("enter the string:");
    scanf("%s",ch);
    int j=strlen(ch);
    rev(ch,i,j-1);
    printf("the output is:%s",ch);
}