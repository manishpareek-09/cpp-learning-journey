#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0, temp = n;
    while(temp > 0) {
        temp /= 10;
        count++;
    }

    cout << "Number of digits = " << count;
    return 0;
}
