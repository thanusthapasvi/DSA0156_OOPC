#include <iostream>
using namespace std;

//Sum of all factors is greater than number
bool isAbundantNumber(int num) {
    if (num <= 0) return false;
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0)
            sum += i;
    }
    return sum > num;
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isAbundantNumber(number))
        cout << number << " is an abundant number.\n";
    else
        cout << number << " is not an abundant number.\n";
    return 0;
}
