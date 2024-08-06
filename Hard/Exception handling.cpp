#include <iostream>
#include <stdexcept>
using namespace std;

double divide(double numerator, double denominator) {
    if (denominator == 0)
        throw runtime_error("Divide by zero error");
    return numerator / denominator;
}
int main() {
    double a = 10.0;
    double b = 0.0;
    double result;
    try {
        result = divide(a, b);
        cout << "Result: " << result << endl;
    } catch (const runtime_error& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    return 0;
}
