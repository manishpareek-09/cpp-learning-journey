#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,count=0,last;
    cout<<"Enter number: ";
    cin>>n;
    while(n){
        last=n%10;
        if(last==8) count++;
        n/=10;
    }
    cout<<count;
}
