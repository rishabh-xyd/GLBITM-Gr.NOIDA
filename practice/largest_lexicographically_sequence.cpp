//leetcode 1718 (Recursion Bactracking)
//Example 1:
//Input: n = 3
// Output: [3,1,2,3,2]
// Example 2:
// Input: n = 5
// Output: [5,3,1,4,3,5,2,4,2]
#include<iostream>
#include<vector>
using namespace std;

bool solve(int i,int n,vector<int>&result,vector<bool>&used){
    if(i>=result.size()) return true;
    if(result[i]!=-1) return solve(i+1,n,result,used);
    for(int num=n;num>=1;num--){
        if(used[num]) continue;
        //try
        used[num]=true;
        result[i]=num;
        //Explore
        if(num==1){
            if(solve(i+1,n,result,used)==true) return true;
        }
        else{
            int j=result[i]+i;
            if(j<result.size()&&result[j]==-1){
                result[j]=num;
                if(solve(i+1,n,result,used)==true) return true;
                result[j]=-1;
            }
        }
        //undo
        used[num]=false; 
        result[i]=-1;
    }
    return false;

}
    vector<int> constructDistancedSequence(int n) {
        vector<int>result(2*n-1,-1);
        vector<bool>used(n+1,false);
        solve(0,n,result,used);
        return result;
    }

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    vector<int> ans = constructDistancedSequence(n);
    for(int i=0;i<2*n-1;i++)  
    cout<<ans[i]<<" ";
    return 0;
}