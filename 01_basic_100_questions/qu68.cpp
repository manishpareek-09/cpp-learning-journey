#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int count = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for(char ch : str) {
        if(isalpha(ch)) {
            ch = tolower(ch);
            if(ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
                count++;
        }
    }
    cout << "Number of consonants = " << count << endl;
    return 0;
}
