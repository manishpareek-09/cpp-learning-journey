#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int temp = n, count = 0;
    while(temp % 7 == 0) {
        temp /= 7;
        count++;
    }

    if(temp == 1) {
        cout << "Power of 7, exponent = " << count;
    } else {
        cout << "Not a power of 7";
    }

    return 0;
}
