#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0, temp = n;
    while(temp > 0) {
        int last = temp % 10;
        sum += last;
        temp /= 10;
    }

    cout << "Sum of digits = " << sum;
    return 0;
}
