#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "My name is " << name << endl;
    return 0;
}
