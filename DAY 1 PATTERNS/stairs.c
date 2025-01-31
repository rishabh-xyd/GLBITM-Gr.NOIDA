// *
// * *
// * * *
//       *
//       * *
//       * * *
//             *
//             * *
//             * * *

#include<stdio.h>
void stairs(int n){
    for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
        for(int k=0;k<j;k++)
        printf("* ");
        for(int k=3;k)
    }
        printf("* ");
    printf("\n");

    }
}
void main(){
    int n;
    printf("Enter the number of stairs: ");
    scanf("%d",&n);
    stairs(n);
}

