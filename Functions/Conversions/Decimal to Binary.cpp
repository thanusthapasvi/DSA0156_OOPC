#include <iostream>
#include <string>
#include <bitset>
using namespace std;

int main() {
    int d;
    cout << "Enter a decimal number: ";
    cin >> d;
    bitset<8> b(d);
    cout<<b;
}
