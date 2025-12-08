#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cout << "Enter how many numbers: ";
    cin >> N;
    vector<int> nums(N);
    cout << "Enter " << N << " numbers: ";
    for(int i = 0; i < N; i++) cin >> nums[i];
    int largest = *max_element(nums.begin(), nums.end());
    cout << "Largest number = " << largest << endl;
    return 0;
}
