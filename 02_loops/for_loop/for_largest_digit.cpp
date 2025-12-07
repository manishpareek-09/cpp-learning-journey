#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int largest = 0;
    for(int temp = n; temp > 0; temp /= 10) {
        int last = temp % 10;
        if(last > largest) largest = last;
    }

    cout << "Largest digit = " << largest;
    return 0;
}
