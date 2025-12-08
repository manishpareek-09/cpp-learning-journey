#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n, digits = 0;
    
    while(temp) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while(temp) {
        int rem = temp % 10;
        sum += pow(rem, digits);
        temp /= 10;
    }
    
    if(sum == n)
        cout << n << " is an Armstrong number" << endl;
    else
        cout << n << " is not an Armstrong number" << endl;
    
    r
