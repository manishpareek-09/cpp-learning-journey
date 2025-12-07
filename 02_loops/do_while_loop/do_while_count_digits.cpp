#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0, temp = n;
    do {
        temp /= 10;
        count++;
    } while(temp > 0);

    cout << "Number of digits = " << count;
    return 0;
}
