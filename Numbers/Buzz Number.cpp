#include <iostream>
using namespace std;

//divisible by 7 or unit digit is 7
bool isBuzzNumber(int num) {
    return num % 7 == 0 || num % 10 == 7;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isBuzzNumber(number))
        cout << number << " is a Buzz number.\n";
    else
        cout << number << " is not a Buzz number.\n";
    return 0;
}
