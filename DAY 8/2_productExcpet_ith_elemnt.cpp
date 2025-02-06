//create another array with product of all elements except the self element
// 24 12 8 6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={1,2,3,4};
    vector<int>result;

    int n=arr.size();
    vector<int>pre(n,1);
     pre[0]=arr[0];
    for(int i=1;i<n;i++){           //prefix multiplication array
        pre[i]=arr[i-1]*arr[i];
    }
    vector<int>suf(n,1);        //Suffix multiplication array
    suf[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]*arr[i];
    }  
    vector<int>ans(n,1);
    for(int i=1;i<n;i++){
        ans[i-1]=pre[i-1]*suf[i+1];
    }
    int M=ans.size();
    for(int i=0;i<M;i++)
    cout<<ans[i]<<" ";
}