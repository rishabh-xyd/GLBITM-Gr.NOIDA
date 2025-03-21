//left rotate for d places
#include<iostream>
using namespace std;
void leftRotate(int arr[],int n,int d){
    
    d=d%n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
void reverse(int arr[],int low, int high){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int d;
    cout<<"left roatate for: ";
    cin>>d;
    leftRotate(arr,n,d);
}