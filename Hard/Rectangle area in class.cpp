#include <iostream>
using namespace std;

class Rectangle {
protected:
    int width;
    int height;
public:
    Rectangle() : width(0), height(0) {}
    Rectangle(int w, int h) : width(w), height(h) {}
    virtual void display() const {
        cout << width << " " << height << endl;
    }
};
class RectangleArea : public Rectangle {
public:
    RectangleArea() : Rectangle() {}
    RectangleArea(int w, int h) : Rectangle(w, h) {}
    void read_input() {
    	cout<<"Enter Width and length : ";
        cin >> width >> height;
    }
    void display() const override {
    	if(width*height<0 && width*height>100)
    		cout<<"Area exceeds 100 "<<endl;
    	else
        	cout << (width * height) << endl;
    }
};

int main() {
    RectangleArea r;
    r.read_input();
    r.Rectangle::display();
    r.display();
    return 0;
}
