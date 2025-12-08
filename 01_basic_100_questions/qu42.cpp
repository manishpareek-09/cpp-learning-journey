#include <bits/stdc++.h>
using namespace std;

int main() {
    string name, city, degree;
    int age;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your city: ";
    getline(cin, city);
    cout << "Enter your degree: ";
    getline(cin, degree);
    cout << "Hello, my name is " << name << ". I am " << age << " years old, from " << city << ", and I have completed " << degree << "." << endl;
    return 0;
}
