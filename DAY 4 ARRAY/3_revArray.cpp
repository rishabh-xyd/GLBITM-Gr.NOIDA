//reverse an array
#include<iostream>
using namespace std;
int revArray(int arr[],int n){
    int i=0;
    while(n>i){
        int temp=arr[i];
        arr[i]=arr[n];
        arr[n]=temp;

    }
}
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    revArray(arr,n);

}