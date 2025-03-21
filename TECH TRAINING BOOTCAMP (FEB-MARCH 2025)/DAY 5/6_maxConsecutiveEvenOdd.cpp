//maxium consecutive even odd
#include<iostream>
using namespace std;
int maxConsecutiveEvenOdd(int arr[],int n){
    if(n==0) return 0;
    int maxConsecutive=0;
    int currConsecutive=0;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0&&arr[i-1]%2!=0)||(arr[i]%2!=0&&arr[i-1]%2==0))
        {
            currConsecutive++;
            maxConsecutive=max(maxConsecutive,currConsecutive);
        }
        else currConsecutive=0;
    }
    return maxConsecutive;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // int arr[]= {1, 2, 3, 4, 5, 7, 9}  ;   //output 5
    // int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Maximum count is: "<<maxConsecutiveEvenOdd(arr,n);
} 