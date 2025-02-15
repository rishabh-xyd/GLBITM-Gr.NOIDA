//reverse an array
#include<iostream>
using namespace std;
int revArray(int arr[],int n){
    int i=0,j=n-1;
    while(j>i){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    revArray(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}