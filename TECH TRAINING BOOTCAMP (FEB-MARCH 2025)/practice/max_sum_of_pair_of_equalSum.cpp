//leetcode 2342 Max sum of pair of equal sum of digits
#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int getSum(int x){
    int sum=0,rem;
    while(x>0){
    rem=x%10;
    sum=sum+rem;
    x=x/10;
    }
    return sum;
}
    int maximumSum(vector<int>& nums) {
        int n=nums.size();
        int res=-1;

        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){   
            int digitSum=getSum(nums[i]);
            if(mp.count(digitSum))
            res=max(res,nums[i]+mp[digitSum]);
            mp[digitSum]=max(mp[digitSum],nums[i]);
        }
    return res;
    }
int main(){
    
    vector<int>arr={18,43,36,13,7};
  
    cout<<maximumSum(arr); //output 54
    return 0;
}