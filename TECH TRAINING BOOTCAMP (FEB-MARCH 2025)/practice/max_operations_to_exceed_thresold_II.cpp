//leetcode 3066

#include<iostream>
#include<vector>
#include<queue>
using namespace std;
    #define ll long long

    int minOperations(vector<int>& nums, int k) {
        priority_queue<ll,vector<ll>,greater<ll>>minheap(nums.begin(),nums.end());
        int count=0;
        while(!minheap.empty()){
            ll min1=minheap.top();
            minheap.pop();
            if(min1>=k)
            break;
            ll min2=minheap.top();
            minheap.pop();
            minheap.push(2*min(min1,min2)+max(min1,min2));
            count++;
        }
        return count;
    }

int main(){
    vector<int>nums = {2,11,10,1,3};
    int k = 10;
    cout<<minOperations(nums,k);
    
    return 0;
}