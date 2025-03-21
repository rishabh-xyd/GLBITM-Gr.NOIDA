//leetcode 50
#include<iostream>
using namespace std;
    double myPow(double x, int n) {
        long long exp=n;
        if(n<0){
        x=1/x;

        exp=-exp;
        }
        double result=1.0;

        while(exp>0){
            if(exp%2!=0) result*=x;
            x=x*x;
            exp/=2;
        }
        return result;
    }

int main(){
    int x=2.00000, n = 10;
    cout<<myPow(x,n);
    return 0;
}