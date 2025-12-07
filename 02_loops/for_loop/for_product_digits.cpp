#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int product = 1;
    for(int temp = n; temp > 0; temp /= 10) {
        product *= temp % 10;
    }

    cout << "Product of digits = " << product;
    return 0;
}
