#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 0, sum = 0;
    while(i <= n) {
        sum += i;
        cout << i << " ";
        i++;
    }

    cout << "\nSum = " << sum;
    return 0;
}
