#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int n;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter number of times to repeat: ";
    cin >> n;
    for(int i = 0; i < n; i++) cout << str << endl;
    return 0;
}
