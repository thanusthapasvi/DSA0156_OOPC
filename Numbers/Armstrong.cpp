#include <iostream>
#include <cmath>
using namespace std;

//sum of Cube of digits is number
bool isArmstrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isArmstrongNumber(number))
        cout << number << " is an Armstrong number.\n";
    else
        cout << number << " is not an Armstrong number.\n";
    return 0;
}
