#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int product = 1;
    do {
        product *= n % 10;
        n /= 10;
    } while(n);

    cout << "Product of digits = " << product;
    return 0;
}
