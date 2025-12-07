#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int temp = n, sum = 0;
    while(temp > 0) {
        int last = temp % 10;
        sum += last * last * last;
        temp /= 10;
    }

    if(sum == n) {
        cout << "Armstrong number";
    } else {
        cout << "Not Armstrong number";
    }

    return 0;
}
