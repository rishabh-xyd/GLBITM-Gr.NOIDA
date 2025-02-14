
#include<iostream>
#include<vector>
using namespace std;
int maxPoints(vector<vector<int>>& points){
    int result=0;
    int n=points.size();
    if(n==1) return 1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int count=2;
            int dy=points[j][1]-points[i][1];
            int dx=points[j][0]-points[i][0];
            for(int k=0;k<n;k++){
                if(k!=i&&k!=j){
                    int dy_=points[k][1]-points[i][1];
                    int dx_=points[k][0]-points[i][0];
                    if(dy_*dx==dy*dx_) count++;
                }
            }
            result=max(result,count);
        }
    }
    return result;
}
int main(){
    vector<vector<int>>points={{1,1},{3,2},{5,3},{4,1},{2,3},{1,4}};
    cout<<maxPoints(points);
    return 0;
}