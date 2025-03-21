//sort 0 1 2 using DUTCH NATIONAL ALGORITHM
//OUITPUT 0 0 1 1 2 2 
//LEETCODE 75

#include<iostream>
using namespace std;
int sort(int nums[],int n){
        // int n=nums.size();
        int low=0,mid=0,high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1)
            mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }

int main() {
   int  arr[]={2,0,2,1,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}