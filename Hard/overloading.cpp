#include <iostream>

using namespace std;

class Printer {
public:
    void print(int n, char c) const {
        cout << "Integer: " << n << ", Character: " << c << endl;
    }
    void print(char n, int c) const {
        cout << "Character: " << n << ", Integer: " << c << endl;
    }
};
int main() {
    Printer p;
    p.print(5, 'A');
    p.print('B', 10);
    return 0;
}
