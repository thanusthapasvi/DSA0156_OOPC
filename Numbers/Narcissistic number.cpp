#include <iostream>
#include <cmath>
using namespace std;

//Same as Armstrong number
bool isNarcissisticNumber(int num) {
    int originalNum = num;
    int sum = 0;
    int digits = log10(num) + 1;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isNarcissisticNumber(number))
        cout << number << " is a Narcissistic number.\n";
    else
        cout << number << " is not a Narcissistic number.\n";
    return 0;
}
