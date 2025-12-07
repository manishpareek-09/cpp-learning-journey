#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int smol = 9, temp = n;
    do {
        int last = temp % 10;
        if(last < smol) smol = last;
        temp /= 10;
    } while(temp);

    cout << "Smallest digit = " << smol;
    return 0;
}
