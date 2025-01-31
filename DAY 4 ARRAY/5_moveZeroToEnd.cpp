//move zero to end
#include<iostream>
using namespace std;
int moveZero(int arr[],int n){
    //function working
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++)
    cout<<arr[i];
}
int main(){
    //driver code
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    moveZero(arr,n);
    printArray(arr,n);


}