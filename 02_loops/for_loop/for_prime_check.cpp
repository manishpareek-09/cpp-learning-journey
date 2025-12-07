#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    bool isPrime = true;
    for(int i = 2; i <= n/2; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime && n > 1) {
        cout << "Prime number";
    } else {
        cout << "Not prime number";
    }

    return 0;
}
