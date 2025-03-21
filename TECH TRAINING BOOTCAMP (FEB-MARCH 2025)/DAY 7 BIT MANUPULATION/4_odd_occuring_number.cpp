//odd ocurring number
//output 3
#include<iostream>
using namespace std;
int oddOccuringNumber(int arr[],int n){
   int  res=arr[0];
    for(int i=0;i<n;i++){
        res=res^arr[i];
    }
    return res;
}
int main(){
    int arr[]={ 1, 2, 3, 2, 3, 1, 3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<oddOccuringNumber(arr,n);
}