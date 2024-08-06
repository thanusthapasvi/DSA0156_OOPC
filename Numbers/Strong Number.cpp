#include <iostream>
#include <vector>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i)
        result *= i;
    return result;
}

bool isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == originalNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isStrongNumber(number))
        cout << number << " is a strong number.\n";
    else
        cout << number << " is not a strong number.\n";
    return 0;
}
