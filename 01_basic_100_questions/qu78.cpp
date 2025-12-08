#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    int temp = n;
    while(temp) {
        count++;
        temp /= 10;
    }
    cout << "Number of digits in " << n << " = " << count << endl;
    return 0;
}
