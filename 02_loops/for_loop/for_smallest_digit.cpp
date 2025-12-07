#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int smallest = 9;
    for(int temp = n; temp > 0; temp /= 10) {
        int last = temp % 10;
        if(last < smallest) smallest = last;
    }

    cout << "Smallest digit = " << smallest;
    return 0;
}
