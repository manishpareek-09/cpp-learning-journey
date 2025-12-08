#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int gcd = a, temp = b;
    while(temp != 0) {
        int t = temp;
        temp = gcd % temp;
        gcd = t;
    }
    int lcm = (a * b) / gcd;
    cout << "LCM = " << lcm << endl;
    return 0;
}
