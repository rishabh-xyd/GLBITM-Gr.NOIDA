#include<iostream>
using namespace std;
void findUnion(int arr[],int m,int brr[],int n){
    int i=0,j=0;
    while(i<m&&j<n){
        if(arr[i]<brr[j])
        cout<<arr[i++]<<" ";
        else if(brr[j]<arr[i])
        cout<<brr[j++]<<" ";
        else{
        cout<<arr[i++]<<" ";
        j++;
        }
        
       
    }
     while(i<m)
        cout<<arr[i++]<<" ";
        while(j<n)
        cout<<brr[j++]<<" ";
}
void findIntersection(int arr[],int m,int brr[],int n){
    int i=0,j=0;
    while(i<m&&j<n){
         if(arr[i] < brr[j])
        i++;
        else if(brr[j]<arr[i])
        j++;
        else{
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        
    }
    
}
int main(){
    int arr[]={1,2,4,5,6};
    int brr[]={2,3,5,7};
    int m=sizeof(arr)/sizeof(arr[0]);
    int n=sizeof(brr)/sizeof(brr[0]);
    findUnion(arr,m,brr,n);
    cout<<endl;
    findIntersection(arr,m,brr,n);
    return 0;
}