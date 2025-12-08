#include <bits/stdc++.h>
using namespace std;

void salarySlip(int s){
    cout<<"Basic: "<<s<<"\nHRA: "<<s*0.2<<"\nTA: "<<s*0.1<<"\nTotal: "<<s+s*0.2+s*0.1;
}

int main(){
    salarySlip(30000);
}
