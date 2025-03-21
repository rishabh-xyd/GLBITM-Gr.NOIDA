//print boundry elements of and array
#include<iostream>
using namespace std;
int main(){
    int r=4,c=4;
    int mat[4][4] = { 

        {1, 2, 3, 4}, 

        {5, 6, 7, 8}, 

        {9, 10, 11, 12}, 

        {13, 14, 15, 16} }; 
        cout<<"Boundary elements of the array are: "<<endl;
        if(r==1){
            for(int i=0;i<c;i++)
            printf("%d ",mat[0][i]);
        }
        else if(c==1){
            for(int i=0;i<r;i++)
            printf("%d ",mat[i][0]);
        }
        else{
            for(int i=0;i<c;i++)
            printf("%d ",mat[0][i]);
            for(int i=1;i<r;i++)
            printf("%d ",mat[i][c-1]);
            for(int i=c-2;i>=0;i--)
            printf("%d ",mat[r-1][i]);
            for(int i=r-2;i>0;i--)
            printf("%d ",mat[i][0]);
        }

}