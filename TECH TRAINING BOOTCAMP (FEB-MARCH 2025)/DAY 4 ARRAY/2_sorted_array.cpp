//check the array is sorted
#include<iostream>
using namespace std;
int sortedArray(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
        return 0;
    }
    return 1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"array::";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
if (sortedArray(arr,n)==1)
cout<<endl<<"array is sorted";
else
cout<<endl<<"array is not sorted";
    return 0;
}