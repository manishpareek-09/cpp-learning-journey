#include <iostream>
#include <string>
using namespace std;

int main() {
    string degree, institution;
    cout << "Enter your degree: ";
    getline(cin, degree);
    cout << "Enter your institution: ";
    getline(cin, institution);
    cout << "I have completed " << degree << " from " << institution << endl;
    return 0;
}
