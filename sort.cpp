#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    int min=arr[0];
    cout<<min;
    cout<<sum;
    return 0;
}