#include <iostream>
#include <sstream>
using namespace std;

string decimalToOctal(int d) {
    stringstream ss;
    ss << oct << d;
    return ss.str();
}

int main() {
    int d;
    cout<<"Enter a decimal number : ";
    cin>>d;
    cout << "Octal: " << decimalToOctal(d) << endl;
    return 0;
}

