#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b;
    char op;
    cout << "Enter expression (a + b): ";
    cin >> a >> op >> b;
    if(op == '+') cout << "Result = " << a + b << endl;
    else if(op == '-') cout << "Result = " << a - b << endl;
    else if(op == '*') cout << "Result = " << a * b << endl;
    else if(op == '/') cout << "Result = " << a / b << endl;
    else cout << "Invalid operator" << endl;
    return 0;
}
