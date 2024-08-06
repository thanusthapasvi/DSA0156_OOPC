#include <iostream>
using namespace std;

//sum of squares of digits until if 1 it is happy number, if loops not a happy number 
int getSumOfSquares(int num) {
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    return sum;
}

bool isHappyNumber(int num) {
    int slow = num, fast = num;
    do {
        slow = getSumOfSquares(slow);
        fast = getSumOfSquares(getSumOfSquares(fast));
    } while (slow != fast);
    return slow == 1;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isHappyNumber(number))
        cout << number << " is a happy number.\n";
    else
        cout << number << " is not a happy number.\n";
    return 0;
}
