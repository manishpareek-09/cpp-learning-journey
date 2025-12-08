#include <bits/stdc++.h>
using namespace std;

int main() {
    double celsius;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    double fahrenheit = (celsius * 9/5) + 32;
    cout << celsius << "°C = " << fahrenheit << "°F" << endl;
    return 0;
}
