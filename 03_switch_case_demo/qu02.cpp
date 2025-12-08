#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string str;
    int caseno;
    int indexno = 4;

    cout << "Enter the string:\n";
    getline(cin, str);

    int n = str.length();
    cout << "string length: " << n << "\n";

    if (n < 3)
        caseno = 1;
    else if (n >= 3 && n <= 5)
        caseno = 2;
    else if (n > 5 && n <= 15)
        caseno = 3;
    else
        caseno = 4;

    switch (caseno) 
    {
        case 1:
            cout << "-1";
            break;

        case 2:
            if (indexno >= n)
                cout << "string length is short.";
            else
                cout << str[indexno];
            break;

        case 3:
            if (n < 10) 
            {
                for (int i = 6; i < n; i++)
                    cout << str[i] << " ";
            } 
            else 
            {
                for (int i = 6; i <= 10; i++)
                    cout << str[i] << " ";
            }
            break;

        case 4:
            cout << str;
            break;

        default:
            cout << "Error";
    }
}
