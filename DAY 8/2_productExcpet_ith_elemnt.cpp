//create another array with product of all elements except the self element
// 24 12 8 6
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr={10,3,5,6,2};
    int n=arr.size();

    vector<int>pre(n,1);
    vector<int>suf(n,1);        //Suffix multiplication array
    vector<int>ans(n,1);
    
    for(int i=1;i<n;i++){           //prefix multiplication array
        pre[i]=pre[i-1]*arr[i-1];
    }
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]*arr[i+1];
    }  
    for(int i=0;i<n;i++){
        ans[i]=pre[i]*suf[i];
    }
    int M=ans.size();
    for(int i=0;i<M;i++)
    cout<<ans[i]<<" ";
}