#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[6], sum = 0;
    cout << "Enter 6 numbers: ";
    for(int i = 0; i < 6; i++) {
        cin >> nums[i];
        if(nums[i] % 2 != 0) sum += nums[i];
    }
    cout << "Sum of odd numbers = " << sum << endl;
    return 0;
}
