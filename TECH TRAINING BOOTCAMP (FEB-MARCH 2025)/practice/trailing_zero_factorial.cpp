// leetcode 69
#include<iostream>
using namespace std;

int fact(int n){
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
}
    int trailingZeroes(int n) {
        int count=0;
        int fac=fact(n);
       while(fac>0){
           int  rem=fac%5;
            fac/=5;
            if(rem==0)
            count++;
        }
        return count;
    }
    int main(){
        int n=7;
        cout<<trailingZeroes(n)<<endl;
    }
