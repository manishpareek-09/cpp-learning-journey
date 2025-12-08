#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Even numbers up to " << N << ": ";
    for(int i = 2; i <= N; i += 2) cout << i << " ";
    cout << endl;
    return 0;
}
