#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,temp,count=0;
    cout<<"Enter number: ";
    cin>>n;
    temp=n;
    while(temp%7==0 && temp>1){
        temp/=7;
        count++;
    }
    if(temp==1) cout<<"Power of 7 "<<count;
    else cout<<"Not power";
}
