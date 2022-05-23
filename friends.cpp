// friend class can access private members of the base class, which is not
// the case for classical inheritance. In classical inheritance, a derived class
// can only access public and protected members of the base class.

#include <iostream>
#include <cassert>

class Square {
public:
    Square(int side) : side_(side) {};
private:
    int side_;
    friend class Rectangle;
};

class Rectangle {
public:
    Rectangle(const Square& s);
    double Area();

private:
    int width_ {0};
    int height_ {0};
};

Rectangle::Rectangle(const Square& s) : width_(s.side_), height_(s.side_){}
double Rectangle::Area() {
    return width_ * height_;
}

int main(void) {
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16);
    // std::cout << rectangle.Area();
    return 0;
}