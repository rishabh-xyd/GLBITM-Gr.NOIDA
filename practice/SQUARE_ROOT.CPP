//Leetcode 69
#include<iostream>
#include<cmath>
using namespace std;
int mySqrt(int n){
    if(n<0) return -1;
    else return sqrt(n);
}
int main(){
    int n=8;
    
    cout<<mySqrt(n);
    return 0;
}