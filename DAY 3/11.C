//check if string is pallindrom

#include<stdio.h>
#include<string.h>
int pallindorm(char *ch,int i,int j){
    if(i>=j)
    return 1;
    if(ch[i]!=ch[j])
    return 0;
    return pallindorm(ch,i+1,j-1);
}


int main(){
    char ch[100];
    int i=0;
    printf("enter the string:");
    scanf("%s",ch);
    int j=strlen(ch);
    if (pallindorm(ch, 0, j))
    printf("YES\n");
    else
    printf("NO\n");

    return 0;
}