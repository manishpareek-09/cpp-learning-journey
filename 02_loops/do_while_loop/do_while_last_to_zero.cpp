#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int last = n % 10;
    do {
        cout << last << " ";
        last--;
    } while(last >= 0);

    return 0;
}
