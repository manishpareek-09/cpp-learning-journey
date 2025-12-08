#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string activity;
    cout << "Enter your age: ";
    cin >> age;
    cin.ignore();
    cout << "Enter your favorite activity: ";
    getline(cin, activity);
    cout << "I am " << age << " years old and I enjoy " << activity << endl;
    return 0;
}
