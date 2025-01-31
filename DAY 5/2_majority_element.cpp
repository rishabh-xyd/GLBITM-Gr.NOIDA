//majority element
#include<iostream>
using namespace std;
int findCandidate(int arr[],int n){
    int maj_index=0,count=1;
    for(int i=1;i<n;i++){
        if(maj_index==arr[i])
        count++;
        else
        count--;
        if(count==0){
        maj_index=i;
        count=1;
        }
    }

    return arr[maj_index];
}
bool isMajority(int arr[],int n,int cand){
    int count=0;
    for(int i=0;i<n;i++)
    if(arr[i]==cand)
    count++;
    if(count>n/2)
    return 1;
    else return 0;
}
void printMajorityElement(int arr[],int n){
    int cand=findCandidate(arr,n);
    if(isMajority(arr,n,cand))
    cout<<"majority element is: "<<cand<<" ";
    else
    cout<<"no majority element";
}
int main(){
    int arr[]={ 2,2,1,1,1,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printMajorityElement(arr,n);
    
}