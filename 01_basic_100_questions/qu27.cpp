#include <iostream>
#include <string>
using namespace std;

int main() {
    string city;
    cout << "Enter your city: ";
    getline(cin, city);
    cout << "I live in " << city << endl;
    return 0;
}
