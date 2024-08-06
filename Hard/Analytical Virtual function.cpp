#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual double area(){
    	return 0;
	}
};
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    double area() override {
        return M_PI * radius * radius;
    }
};
class Rectangle : public Shape {
private:
    double width, length;
public:
    Rectangle(double w, double h) : width(w), length(h) {}
    double area() override {
        return width * length;
    }
};
int main() {
    Shape* s1 = new Circle(5.0);
    Shape* s2 = new Rectangle(7.0, 5.0);
    cout << "Area of Circle: " << s1->area() << endl;
    cout << "Area of Rectangle: " << s2->area() << endl;
    return 0;
}
