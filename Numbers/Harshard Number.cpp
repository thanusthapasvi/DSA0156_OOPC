#include <iostream>
using namespace std;

//Number must be divisible by sum of digits 
bool isHarshadNumber(int num) {
    int sum = 0;
    int originalNum = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return originalNum % sum == 0;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isHarshadNumber(number))
        cout << number << " is a Harshad number.\n";
    else
        cout << number << " is not a Harshad number.\n";
    return 0;
}
