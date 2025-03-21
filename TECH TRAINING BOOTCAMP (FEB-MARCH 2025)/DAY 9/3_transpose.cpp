//transpose an matrix
#define R 4
#define C 4
#include<iostream>
using namespace std;
void transpose(int mat[R][C]){
    for (int i = 0; i < R; i++) {
        for (int j = i + 1; j < C; j++) {  
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
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
    // int r=4,c=4;
    int mat[4][4] = { 

        {1, 2, 3, 4}, 

        {5, 6, 7, 8}, 

        {9, 10, 11, 12}, 

        {13, 14, 15, 16} }; 
        printMatrix(mat);
        transpose(mat);
        cout<<"transposed matrix:"<<endl;
        printMatrix(mat);
}
