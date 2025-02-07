//trnaspose an matrix
#include<iostream>
#define R 4
#define C 4
using namespace std;
void  transpose(int mat[R][C]){
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++)
        swap(mat[][],mat[][])
    }
}
void printMatrix(int mat[R][C]){
    for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;}

}
int main(){
     int mat[R][C] = { 

        {1, 2, 3, 4}, 

        {5, 6, 7, 8}, 

        {9, 10, 11, 12}, 

        {13, 14, 15, 16} 

    }; 
    
     printMatrix(mat);
    transpose(mat);
}