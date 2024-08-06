#include <iostream>
using namespace std;

//sum of all factors = number
bool isPerfectNumber(int num) {
    if (num <= 0) return false;
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isPerfectNumber(number))
        cout << number << " is a perfect number.\n";
    else
        cout << number << " is not a perfect number.\n";
    return 0;
}
