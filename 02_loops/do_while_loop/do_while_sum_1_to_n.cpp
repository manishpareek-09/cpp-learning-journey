#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1, sum = 0;
    do {
        sum += i;
        cout << i << " ";
        i++;
    } while(i <= n);

    cout << "\nSum = " << sum;
    return 0;
}
