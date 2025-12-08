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
    cout << "Reversed number = " << rev << endl;
    return 0;
}
