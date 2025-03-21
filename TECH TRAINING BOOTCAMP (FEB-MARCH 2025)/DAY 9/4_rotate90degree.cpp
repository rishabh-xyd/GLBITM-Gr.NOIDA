//rotate an matrix 90 degree
#include<iostream>
#define N 4
using namespace std;
void printMatrix(int mat[N][N]){
    for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        cout<<mat[i][j]<<" ";
    }
    cout<<endl;}

}
int main(){
     int mat[N][N] = { 

        {1, 2, 3, 4}, 

        {5, 6, 7, 8}, 

        {9, 10, 11, 12}, 

        {13, 14, 15, 16} 

    }; 
    
     printMatrix(mat);
}