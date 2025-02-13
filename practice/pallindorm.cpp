//leetcode 9
#include<iostream>
using namespace std;

    bool isPalindrome(int x) {
       long int rem,rev=0,n=x;
        if(x<0) return false;
        while(x>0)
        {
            rem=x%10;
            rev=rev*10+rem;
            x=x/10;
        }
        if(rev!=n)
        return false;
        else return true;
    }
int main(){
    int n=121;
    if(isPalindrome)
    cout<<"yes"<<endl;
    else
    cout<<"no"<<endl;
    return 0;
}