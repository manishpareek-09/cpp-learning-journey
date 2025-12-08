#include <iostream>
#include <string>
using namespace std;

int main() {
    string job;
    cout << "Enter your job title: ";
    getline(cin, job);
    cout << "I am working as a " << job << endl;
    return 0;
}
