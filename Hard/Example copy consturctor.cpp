#include <iostream>

using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1) {}
    Point(const Point& other) : x(other.x), y(other.y) {
        cout << "Copy constructor called." << endl;
    }
    void print() const {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Point P1(10, 15);
    Point P2(P1);
    cout << "Original Point:" << endl;
    P1.print();
    cout << "Copied Point:" << endl;
    P2.print();
    return 0;
}
