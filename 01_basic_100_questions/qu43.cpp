#include <bits/stdc++.h>
using namespace std;

int main() {
    double nums[5], sum = 0;
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) {
        cin >> nums[i];
        sum += nums[i];
    }
    cout << "Average = " << sum / 5 << endl;
    return 0;
}
