#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    int x = a, y = b;
    while(x % y != 0) {
        int temp = x % y;
        x = y;
        y = temp;
    }

    cout << "GCD = " << y;
    return 0;
}
