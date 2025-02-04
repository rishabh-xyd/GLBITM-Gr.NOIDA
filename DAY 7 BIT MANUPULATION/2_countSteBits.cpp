//cont the set bits
//output 3
#include<iostream>
using namespace std;
int numberOfSetBits(int n){
    int count=0;
    while(n>0){
        n=n&(n-1);
        count++;

    }
    return count;
}
int main(){
    int n=11;
    cout<<numberOfSetBits(n);
}