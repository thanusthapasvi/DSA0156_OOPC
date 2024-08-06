#include <iostream>
#include <sstream>
#include <bitset>
using namespace std;

int main() {
    string b, o, h;
    int d1,d2;
    cout << "Enter a Binary Octal Hex: ";
    cin >> b >> o >> h;
    bitset<32> bs(b);
    stringstream s1;
    s1 << oct << o;
    s1 >> d1;
    stringstream s2;
    s2 << hex << h;
    s2 >> d2;
    cout << "Binary to Decimal: " << bs.to_ulong() << endl;
    cout << "Octal to Decimal: " << d1 << endl;
    cout << "Hexadecimal to Decimal: " << d2 << endl;
}
