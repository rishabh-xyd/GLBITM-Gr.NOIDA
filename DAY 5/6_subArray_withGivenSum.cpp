    // find Subarray of a given sum using sliding window
    #include<iostream>
    using namespace std;
    bool isSubarray(int arr[],int n,int sum){
        int sumCount=0,curr=0;
        for(int e=0;e<n;e++){
            curr+=arr[e];
            while(sum<curr&&sumCount<=e){
                curr-=arr[sumCount];
                sumCount++;
            }
            if(curr==sum)
            return true;
        }
        return false;
    }
    int main(){
        int arr[] = {10, 2, -2, -20, 10};
        int n=sizeof(arr)/sizeof(arr[0]);
        int sum=-10;
        // cin>>sum;
        if (isSubarray(arr, n, sum)) 
            cout << "Subarray with given sum exists.\n";
        else 
            cout << "No subarray with given sum found.\n";
            return 0;
    }