//remover duplicate form an array
#include<iostream>
using namespace std;
int remDep(int arr[],int n){
    //function working
    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[res]=arr[i];
            res++;
        }
    
    }
    return res;
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {1, 2, 2, 3, 4,5,6,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    n=remDep(arr,n);
    printArray(arr,n);

}
