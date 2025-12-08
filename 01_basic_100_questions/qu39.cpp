#include <iostream>
using namespace std;

int main() {
    int nums[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) cin >> nums[i];
    cout << "You entered: ";
    for (int i = 0; i < 10; i++) cout << nums[i] << " ";
    cout << endl;
    return 0;
}
