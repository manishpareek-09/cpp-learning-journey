#include <iostream>
using namespace std;

int main() {
    int start, end;
    cout << "Enter start and end: ";
    cin >> start >> end;

    int sum = 0;
    for(int i = start; i <= end; i++) {
        if(i % 2 != 0) {
            sum += i;
        }
    }

    cout << "Sum of odd numbers = " << sum;
    return 0;
}
