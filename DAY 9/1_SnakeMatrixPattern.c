#include<stdio.h>

int main(){
    int R=4,C=4;
    int mat[4][4] = { 

        {1, 2, 3, 4}, 

        {5, 6, 7, 8}, 

        {9, 10, 11, 12}, 

        {13, 14, 15, 16} }; 
    for(int i=0;i<R;i++){
        if(i%2==0){
        for(int j=0;j<C;j++)
        printf("%d  ",mat[i][j]);
        }
        else{
            for(int j = C - 1; j >= 0; j--) 
            printf("%d  ",mat[i][j]); 
        }

    }
   
    

}