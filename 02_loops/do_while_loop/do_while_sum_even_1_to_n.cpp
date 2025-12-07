#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1, sum = 0;
    do {
        if(i % 2 == 0) {
            cout << i << " ";
            sum += i;
        }
        i++;
    } while(i <= n);

    cout << "\nSum = " << sum;
    return 0;
}
