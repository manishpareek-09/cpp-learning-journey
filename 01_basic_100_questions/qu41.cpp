#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, city, institution;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your city: ";
    getline(cin, city);
    cout << "Enter your institution: ";
    getline(cin, institution);
    cout << "Hello, myself " << name << ". I am from " << city << ". I have completed BTech from " << institution << "." << endl;
    return 0;
}
