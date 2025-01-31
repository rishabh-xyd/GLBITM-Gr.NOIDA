//leader in arry
#include<iostream>
#include<vector>
using namespace std;
void printLeaders(int arr[],int n){
    vector<int>leaders;
    int currentLeader=arr[n-1];
    // cout<<currentLeader<<" ";
    leaders.push_back(currentLeader);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>currentLeader){
            currentLeader=arr[i];
            // cout<<currentLeader<<" ";
            leaders.push_back(currentLeader);
        }
    }       
    for(int i=leaders.size()-1;i>=0;i++)
    cout<<leaders[i]<<" ";
    cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<"leaders of array are: ";
    printLeaders(arr,n);
}