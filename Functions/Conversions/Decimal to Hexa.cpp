#include <iostream>
#include <sstream>
using namespace std;

string decimalToHex(int decimal) {
    stringstream ss;
    ss << hex << uppercase << decimal;
    return ss.str();
}

int main() {
    int d;
    cout<<"Enter a decimal number : ";
    cin>>d;
    cout << "Hexadecimal: " << decimalToHex(d) << endl;
    return 0;
}
