#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
        cout << i << " ";
    }

    cout << "\nSum = " << sum;
    return 0;
}
