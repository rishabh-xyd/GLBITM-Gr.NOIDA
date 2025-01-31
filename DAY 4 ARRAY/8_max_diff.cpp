//maximum differnce
#include<iostream>
#include<algorithm>
using namespace std;
int maxDiff(int arr[],int n){
    // int n=arr.size();  //runs in leetcode
   
    int res=-1;

    if(n<2)
    return res;
    int minVal=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>minVal)
        res=max(res,arr[i]-minVal);
        minVal=min(arr[i],minVal);
    }
    
    return res;
}
int main(){
    int arr[]={1,2,90,10,109};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"max diff is:"<<maxDiff(arr,n);
}