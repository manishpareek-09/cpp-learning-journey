#include <iostream>
using namespace std;

int main() {
    int n, a, b;
    cout << "Enter N: ";
    cin >> n;
    cout << "Enter A: ";
    cin >> a;
    cout << "Enter B: ";
    cin >> b;

    int i = 1;
    while(i <= n) {
        if(i % a == 0 && i % b == 0) {
            cout << i << " ";
        }
        i++;
    }

    return 0;
}
