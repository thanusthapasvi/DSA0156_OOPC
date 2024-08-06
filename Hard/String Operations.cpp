#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
	cin>>str;
    string s = str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    cout << "Lowercase string: " << str << endl;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    cout << "Uppercase string: " << str << endl;
    reverse(s.begin(), s.end());
    cout << "Reversed string: " << s << endl;
    return 0;
}
