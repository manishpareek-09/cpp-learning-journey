#include <iostream>
using namespace std;

int main() {
    float nums[15];
    cout << "Enter 15 float numbers: ";
    for (int i = 0; i < 15; i++) cin >> nums[i];
    cout << "You entered: ";
    for (int i = 0; i < 15; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}
