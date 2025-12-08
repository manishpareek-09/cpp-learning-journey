#include <iostream>
#include <string>
using namespace std;

int main() {
    string city, hobby;
    cout << "Enter your city: ";
    getline(cin, city);
    cout << "Enter your hobby: ";
    getline(cin, hobby);
    cout << "I am from " << city << ", and my favorite hobby is " << hobby << endl;
    return 0;
}
