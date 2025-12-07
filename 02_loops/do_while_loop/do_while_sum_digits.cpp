#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    do {
        sum += n % 10;
        n /= 10;
    } while(n);

    cout << "Sum of digits = " << sum;
    return 0;
}
