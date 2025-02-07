//median of two sorted arrays
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
double medianOfTwo(vector<int>nums1,vector<int>nums2){
    int m=nums1.size();
    int n=nums2.size();
    if(m>n)
    return medianOfTwo(nums2,nums1);
    int begin=0,end=m;
    while(begin<=end){
        int i=(begin+end)/2;
        int j=((m+n+1)/2)-i;
        int min1=(i==m)?INT_MAX:nums1[i];
        int max1=(i==0)?INT_MIN:nums1[i-1];
        int min2=(j==n)?INT_MAX:nums2[j];
        int max2=(j==0)?INT_MAX:nums2[j-1];
        if(max2<=min1&&max1<=min2){
            if((m+n)%2==0)
            return (double) ((max(max1,max2)+min(min1,min2))/2.0);
            else return (double) (max(max1,max2));        
            }
        else if(max1>min2) end=i-1;
        else begin=i+1;
    }
    return -1;
}
int main(){
    vector<int>arr= {-5, 3, 6, 12, 15};
    vector<int>brr= {-12, -10, -6, -3, 4, 10};
    cout<<medianOfTwo(arr,brr);
}