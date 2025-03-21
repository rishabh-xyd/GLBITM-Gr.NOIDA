//power of two using bit magic
#include<iostream>
using namespace std;
int isPowerOfTwo(int n){
    return (n&&(n&(n-1))==0);
}
int main(){
    isPowerOfTwo(30)?cout<<"yes\n":cout<<"no\n";
    isPowerOfTwo(128)?cout<<"yes\n":cout<<"no\n";
    
}