// virtual function: base class 에서는 선언만 하고, subclass 에서 세부 내용을 정의
// declared in a base class, and can be overridden by derived classes.
// this approach declares an interface at the base level, but delegates the implementation
// of the interface to the derived classes.

#include <cassert>
#include <cmath>
#define PI 3.141592;

class Shape {
public:
    Shape() {}
    // if we mark the virtual function with = 0 in the base class, the function is declared as pure virtual function.
    virtual double Area() const = 0;
    virtual double Perimeter() const = 0;
private:
};

class Rectangle : public Shape {
public:
    Rectangle(double width, double height) : width_(width), height_(height) {};
    double Area() const override {return width_ * height_;}
    double Perimeter() const override {return 2 * (width_ + height_);}

private:
    double width_;
    double height_;
};

class Circle : public Shape {
public:
    Circle(double radius) : radius_(radius) {};
    // override 하는 경우 override 를 명시할 수 있다. 명확한 코드 작성 가능
    double Area() const override { return pow(radius_, 2) * PI; }
    double Perimeter() const override { return 2 * radius_ * PI; }

private:
    double radius_;
};

int main(void) {
    double epsilon = 0.1;
    Circle circle(12.31);
    assert(abs(circle.Perimeter() - 77.35) < epsilon);
    assert(abs(circle.Area() - 476.06) < epsilon);

    Rectangle rectangle(10, 6);
    assert(rectangle.Perimeter() == 32);
    assert(rectangle.Area() == 60);

    return 0;
}
