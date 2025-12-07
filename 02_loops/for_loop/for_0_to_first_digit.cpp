#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int first = n;
    while(first >= 10) {
        first /= 10;
    }

    for(int i = 0; i <= first; i++) {
        cout << i << " ";
    }

    return 0;
}
