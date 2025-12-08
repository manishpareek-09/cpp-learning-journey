#include <bits/stdc++.h>
using namespace std;

int main() {
    int nums[5];
    cout << "Enter 5 numbers: ";
    for(int i = 0; i < 5; i++) cin >> nums[i];
    int largest = nums[0];
    for(int i = 1; i < 5; i++) if(nums[i] > largest) largest = nums[i];
    cout << "Largest number = " << largest << endl;
    return 0;
}
