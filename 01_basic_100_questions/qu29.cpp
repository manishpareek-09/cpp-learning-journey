#include <iostream>
#include <string>
using namespace std;

int main() {
    string color;
    cout << "Enter your favorite color: ";
    getline(cin, color);
    cout << "My favorite color is " << color << endl;
    return 0;
}
