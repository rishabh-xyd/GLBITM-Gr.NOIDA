//maximum and minimum sum of subarray from point k
//sliding window

    //test case to pass:
// Enter array size: 6  
// Enter array elements: 3 -2 5 -1 6 -3  
// Enter the window size K: 3  
    //output
    // Maximum sum: 10  
    // Minimum sum: 2  


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
pair<int,int> maxMinSum(int arr[],int n,int k){
    if(n<k) return {INT_MIN,INT_MAX}  ;
    int currSum=0;
    
    
    for(int i=0;i<k;i++)
    currSum+=arr[i];
    int maxSum=currSum, minSum=currSum;
    for(int i=k;i<n;i++){
        currSum=currSum+arr[i]-arr[i-k];
        maxSum=max(maxSum,currSum);
        minSum=min(minSum,currSum);
    }
    return {maxSum, minSum};
}
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<"Enter the point K: "<<endl;
    int k;
    cin>>k;
     pair<int, int> result = maxMinSum(arr, n, k);
     if (result.first == INT_MIN) {
        cout << "Invalid input: k is greater than array size." << endl;
    } else {
        cout << "Maximum sum: " << result.first << endl;
        cout << "Minimum sum: " << result.second << endl;
    }
}