//missing number 
//intput [9,6,4,2,3,5,7,0,1]
//outpur 8
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int missingNumber(int arr[],int n){
    int N=0,ARR=0; 
    for(int i=0;i<n;i++){
        N^=arr[i];
        //xor form 1 to n
        
    }
    for(int i=0;i<n;i++){
        ARR^=i;
        //xor form arr elments
    }
    ARR=ARR^N;
    return (ARR^N);
}
int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<missingNumber(arr,n);
}