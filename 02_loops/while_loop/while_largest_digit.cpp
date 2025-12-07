#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int largest = 0, temp = n;
    while(temp > 0) {
        int last = temp % 10;
        if(last > largest) {
            largest = last;
        }
        temp /= 10;
    }

    cout << "Largest digit = " << largest;
    return 0;
}
