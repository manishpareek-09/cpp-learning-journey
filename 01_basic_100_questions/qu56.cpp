#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, rev = 0;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while(temp) {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    if(n == rev)
        cout << n << " is a palindrome" << endl;
    else
        cout << n << " is not a palindrome" << endl;
    return 0;
}
