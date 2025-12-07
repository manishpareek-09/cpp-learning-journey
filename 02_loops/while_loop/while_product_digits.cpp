#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int product = 1, temp = n;
    while(temp > 0) {
        int last = temp % 10;
        product *= last;
        temp /= 10;
    }

    cout << "Product of digits = " << product;
    return 0;
}
