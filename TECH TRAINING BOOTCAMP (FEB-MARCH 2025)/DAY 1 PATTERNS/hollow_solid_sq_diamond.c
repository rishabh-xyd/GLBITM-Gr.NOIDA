//  * * * * * * * * * *
//  * * * *     * * * *
//  * * *         * * *
//  * *             * *
//  *                 *
//  *                 *
//  * *             * *
//  * * *         * * *
//  * * * *     * * * *
//  * * * * * * * * * *


#include<stdio.h>
void upside(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++)
        printf("* ");
        for(int j=0;j<2*i;j++)
        printf("  ");
        for(int j=0;j<n-i;j++)
        printf("* ");
    printf("\n");
    }
}
void downside(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++)
        printf("* ");
        for(int j=0;j<2*n-2*(i+1);j++)
        printf("  ");
        for(int j=0;j<i+1;j++)
        printf("* ");
        printf("\n");
    }
}
void main(){
    int n=10;
    upside(n/2);
    downside(n/2);
}