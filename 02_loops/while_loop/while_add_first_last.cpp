#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int first = n, last = n % 10;
    while(first >= 10) {
        first /= 10;
    }

    int sum = first + last;
    cout << "Sum of first and last digit = " << sum;
    return 0;
}

