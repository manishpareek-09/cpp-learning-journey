#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    int sum = 0, temp = n, digits = 0;
    for(int t = temp; t > 0; t /= 10) digits++; // Count digits

    for(int t = temp; t > 0; t /= 10) {
        int last = t % 10;
        sum += pow(last, digits);
    }

    if(sum == n)
        cout << "Armstrong number";
    else
        cout << "Not Armstrong number";

    return 0;
}
