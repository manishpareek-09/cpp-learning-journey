#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Multiplication table of " << num << " in reverse order:" << endl;
    for(int i = 10; i >= 1; i--) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    return 0;
}
