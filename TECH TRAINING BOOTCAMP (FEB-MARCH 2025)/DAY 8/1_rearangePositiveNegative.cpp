// rearange the positive and negative number
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> rearange(vector<int> &nums){
    vector<int>pos,neg,result;
    int n = nums.size();
    for(int i=0;i<n;i++){
        if(nums[i]>0)
        pos.push_back(nums[i]);
        else
        neg.push_back(nums[i]);
    }
    int i=0,j=0;
    while(i<pos.size()&&j<pos.size()){
        result.push_back(neg[j++]);
        result.push_back(pos[i++]);

    }
  return result;
}
int main(){
    vector<int> arr={3,1,-2,-5,2,-4};
    int n=arr.size();
    vector<int>result=rearange(arr);
    for(int i=0;i<n;i++)
    cout<<result[i]<<" ";
    
    return 0;


}