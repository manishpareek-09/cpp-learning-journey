#include <bits/stdc++.h>
using namespace std;

void GCD(int a,int b){
    while(b){
        int t=b;
        b=a%b;
        a=t;
    }
    cout<<a;
}

int main(){
    GCD(24,18);
}
