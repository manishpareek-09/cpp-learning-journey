#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,first,last;
    cout<<"Enter number: ";
    cin>>n;
    first=n;
    last=n%10;
    while(first>=10) first/=10;
    cout<<first+last;
}
