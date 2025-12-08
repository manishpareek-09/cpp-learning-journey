#include <bits/stdc++.h>
using namespace std;

void printGrade(int m){
    if(m>=90) cout<<"A";
    else if(m>=75) cout<<"B";
    else if(m>=60) cout<<"C";
    else cout<<"D";
}

int main(){
    printGrade(82);
}
