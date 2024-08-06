#include <iostream>
using namespace std;

//sum of digits equal to number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
bool isNeonNumber(int num) {
    int square = num * num;
    return sumOfDigits(square) == num;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isNeonNumber(number))
        cout << number << " is a neon number.\n";
    else
        cout << number << " is not a neon number.\n";
    return 0;
}
