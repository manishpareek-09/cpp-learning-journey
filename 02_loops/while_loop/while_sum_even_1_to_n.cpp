#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int i = 1, sum = 0;
    while(i <= n) {
        if(i % 2 == 0) {
            cout << i << " ";
            sum += i;
        }
        i++;
    }

    cout << "\nSum = " << sum;
    return 0;
}
