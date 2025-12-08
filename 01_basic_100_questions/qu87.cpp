#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n % 4 == 0 && n % 8 != 0) cout << n << " is divisible by 4 but not 8" << endl;
    else cout << n << " does not satisfy the condition" << endl;
    return 0;
}
