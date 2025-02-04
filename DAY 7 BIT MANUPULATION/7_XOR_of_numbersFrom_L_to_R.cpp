//find the xor if numbers form L to R
#include<iostream>
using namespace std;
int findXOR1(int );
int findXOR(int l, int r) {
    return (findXOR1(r) ^ findXOR1(l - 1));
}
int findXOR1(int n){
    int mod=n%4;
    if(mod==0)
    return n;
    else if(mod==1)
    return 1;
    else if(mod==2)
    return n+1;
    else if(mod==3)
    return 0;
}
int main(){
    int l=4,r=8;
    cout<<findXOR(l,r);
}