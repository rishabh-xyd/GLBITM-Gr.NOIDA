//choclate distribution problem
//input students : 5
//output 6

#include<iostream>
#include<algorithm>
using namespace std;
int minDiff(int arr[],int n,int m){
    if(m>n)
    return -1;
    sort(arr,arr+n);
    int res=arr[m-1]-arr[0];
    for(int i=1;(i+m-1)<n;i++)
    res=min(res,arr[i+m-1]-arr[i]);
    return res;
}
int main(){
    int m;
    cout<<"enter the number of students: ";
    cin>>m;
    int arr[]={3, 4, 1, 9, 56, 7, 9, 12};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<minDiff(arr,n,m);
}