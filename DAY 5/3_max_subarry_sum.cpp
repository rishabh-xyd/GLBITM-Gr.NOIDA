//maximum subarray sum
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int maxSubarray(int arr[],int n){
    int maxSum=INT_MIN;
    int currSum=0;
    for(int i=0;i<n-1;i++){
        currSum+=arr[i];
        if(currSum>maxSum)
        maxSum=currSum;
        if(currSum<0)
        currSum=0;
    }
    return maxSum;
}
int main(){
    int arr[]={-2,1,-3,4,-1,2,1,-5,4}; //output 6
    int n=sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Max Sum of Subarray is:"<<maxSubarray(arr,n)<<endl;
}