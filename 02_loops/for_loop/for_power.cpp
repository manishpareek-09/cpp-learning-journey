#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter base: ";
    cin >> n;
    cout << "Enter exponent: ";
    cin >> x;

    int result = 1;
    for(int i = 1; i <= x; i++) {
        result *= n;
    }

    cout << n << " ^ " << x << " = " << result;
    return 0;
}
