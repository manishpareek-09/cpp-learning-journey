#include <bits/stdc++.h>
using namespace std;

void CheckPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){ cout<<"Not Prime"; return; }
    }
    cout<<"Prime";
}

int main(){
    CheckPrime(17);
}
