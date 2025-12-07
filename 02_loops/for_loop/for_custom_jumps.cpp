#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter nth number: ";
    cin >> n;

    // Jump by 2
    for(int i=1;i<=n;i+=2){
        cout<<i<<" ";
    }
    cout<<endl;

    // Jump by 4
    for(int i=1;i<=n;i+=4){
        cout<<i<<" ";
    }
    cout<<endl;

    // Jump by 5
    for(int i=1;i<=n;i+=5){
        cout<<i<<" ";
    }
    cout<<endl;

    // Jump by 6
    for(int i=1;i<=n;i+=6){
        cout<<i<<" ";
    }
    cout<<endl;

    // Jump by 8
    for(int i=1;i<=n;i+=8){
        cout<<i<<" ";
    }
    cout<<endl;

    // Jump by 10
    for(int i=1;i<=n;i+=10){
        cout<<i<<" ";
    }
    cout<<endl;
}
