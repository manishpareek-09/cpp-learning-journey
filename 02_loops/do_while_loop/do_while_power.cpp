#include <iostream>
using namespace std;

int main() {
    int n, x;
    cout << "Enter base: ";
    cin >> n;
    cout << "Enter exponent: ";
    cin >> x;

    int result = 1, i = 1;
    do {
        result *= n;
        i++;
    } while(i <= x);

    cout << n << " ^ " << x << " = " << result;
    return 0;
}
