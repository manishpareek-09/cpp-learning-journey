#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter N: ";
    cin >> N;
    cout << "Prime numbers up to " << N << ": ";
    for(int i = 2; i <= N; i++) {
        bool isPrime = true;
        for(int j = 2; j <= sqrt(i); j++) {
            if(i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << " ";
    }
    cout << endl;
    return 0;
}
