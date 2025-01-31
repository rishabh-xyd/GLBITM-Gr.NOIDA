//equlibrium point int the array
#include<iostream>
using namespace std;
int findEquilibrium(int arr[],int n){
    int leftSum=arr[0];
    int rightSum;
    for(int i=2;i<n;i++)
    rightSum+=arr[i];

    for(int i=1;i<n;i++){
        if(leftSum==rightSum)
        return arr[i];

        leftSum+=arr[i];
        rightSum-=arr[i+1];
    }
return -1;
}
int main(){
    int arr[]={-7,1,5,2,-4,3,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Equilibrium point: "<<findEquilibrium(arr,n)<<endl;
}