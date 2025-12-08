#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, sum = 0;
    cout << "Enter N: ";
    cin >> N;
    for(int i = 2; i <= N; i += 2) sum += i;
    cout << "Sum of even numbers up to " << N << " = " << sum << endl;
    return 0;
}
