#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    int largest = max(a, max(b, c));
    cout << "Largest number is " << largest << endl;
    return 0;
}
