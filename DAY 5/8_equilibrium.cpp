//equlibrium point in the array
#include<iostream>
using namespace std;
int findEquilibrium(int arr[],int n){
    int leftSum=arr[0];
    int rightSum=0;
    for(int i=2;i<n;i++)
    rightSum+=arr[i];

    for(int i=1;i<n;i++){
        if(leftSum==rightSum)
        return i;

        rightSum-=arr[i+1];
        leftSum+=arr[i];
    }
return -1;
}
int main(){
    int arr[]={-7,1,5,2,-4,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=findEquilibrium(arr,n);
    if(x!=-1)
    cout<<"Equilibrium point: "<<x;
    else
    cout<<"not found";
}