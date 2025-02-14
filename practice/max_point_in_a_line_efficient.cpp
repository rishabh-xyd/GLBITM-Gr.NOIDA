//leetcode 149
//efficient approch using unordered map
#include<iostream>
#include<vector>
#include<unordered_map>
#include<math.h>
using namespace std;
int maxPoints(vector<vector<int>>& points)
{
    int result=0;
    int n=points.size();
    if(n==1) return 1;
    for(int i=0;i<n;i++)
    {
        unordered_map<double,int>mp;
        for(int j=0;j<n;j++)
        {
            if(i==j) continue;
            auto dy=points[j][1]-points[i][1];
            auto dx=points[j][0]-points[i][0];
            auto theta=atan2(dy,dx);
            mp[theta]++;
            for(auto &it: mp)
            result=max(result,it.second+1);
        }
    }
    return result;
}
int main(){
    vector<vector<int>>points={{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
    cout<<maxPoints(points);
    return 0;
}