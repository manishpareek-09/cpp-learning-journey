#include <bits/stdc++.h>
using namespace std;
void showMenu(){
    string day;
    cin>>day;
    if(day=="morning") cout<<"tea\npoha\nsamosa";
    else if(day=="evening") cout<<"roti\nsabji\napple";
    else if(day=="night") cout<<"hari-sabji\npaneer\napple";
    else cout<<"invalid string";
}
int main(){
    showMenu();
    return 0;
}
