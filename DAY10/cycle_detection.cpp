//Floyd Tortoies and Harre Algorithm
#include<iostream>
using namespace std;
int repeating(int arr[]){
    int slow=arr[0];
    int fast=arr[0];
    do{
        slow=arr[slow];
        fast=arr[arr[fast]];
    }while(slow!=fast);
    slow=arr[0];
    while(slow!=fast){
        slow=arr[slow];
        fast=arr[fast];
    }
    return slow;
}
int main(){
    int arr[]={1,3,2,4,6,5,7,3};
    cout<<repeating(arr);   //output is 3

}