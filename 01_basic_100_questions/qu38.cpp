#include <iostream>
#include <string>
using namespace std;

int main() {
    string career;
    cin.ignore();
    cout << "Enter your career interest: ";
    getline(cin, career);
    cout << "I am interested in " << career << " as a career" << endl;
    return 0;
}
