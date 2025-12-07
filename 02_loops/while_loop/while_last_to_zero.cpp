#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int last = n % 10;
    while(last >= 0) {
        cout << last << " ";
        last--;
    }

    return 0;
}
