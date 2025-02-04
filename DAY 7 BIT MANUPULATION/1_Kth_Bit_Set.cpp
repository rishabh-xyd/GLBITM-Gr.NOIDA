//wap to check the kth bit is set or not 
#include<iostream>
using namespace std;
void setBits(int n, int k){
    if(n&(1<<(k-1)))
    cout<<"yes";
    else
    cout<<"no";
}
int main(){
    int n;
    cout<<"Enter the n:";
    cin>>n;//5
    int k;
    cout<<"Enter the kth position:";
    cin>>k;//1
    setBits(n,k);
}