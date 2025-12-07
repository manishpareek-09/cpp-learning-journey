#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cout << "Enter N, A, B: ";
    cin >> N >> A >> B;

    for(int i = 1; i <= N; i++) {
        if(i % A == 0 && i % B == 0) {
            cout << i << " ";
        }
    }
    return 0;
}
