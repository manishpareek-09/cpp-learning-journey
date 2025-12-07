#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    int rev = 0, temp = n;
    do {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    } while(temp);

    if(n == rev)
        cout << "Palindrome number";
    else
        cout << "Not a palindrome";
    return 0;
}
