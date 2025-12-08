#include <bits/stdc++.h>
using namespace std;

void palindrome(int n){
    int x=n,rev=0;
    while(n){
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<(rev==x?"Palindrome":"Not Palindrome");
}

int main(){
    palindrome(121);
}
