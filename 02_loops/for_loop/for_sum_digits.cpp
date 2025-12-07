#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for(int temp = n; temp > 0; temp /= 10) {
        sum += temp % 10;
    }

    cout << "Sum of digits = " << sum;
    return 0;
}
