#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int count = 0, temp = n;
    do {
        if(temp % 10 == 0) count++;
        else break;
        temp /= 10;
    } while(temp);

    int rev = 0;
    temp = n;
    do {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    } while(temp);

    for(int i = 0; i < count; i++) {
        cout << 0;
    }
    cout << rev;
    return 0;
}
