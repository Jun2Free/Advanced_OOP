#include <iostream>
#include <math.h>
#include <cassert>
#define PI 3.141592

class LineSegment {
public:
    LineSegment(double length) : length_(length){};
    double length_;

};

class Circle {
public:
    Circle(LineSegment& radius);
    double Area();
private:
    LineSegment& radius_;
};

Circle::Circle(LineSegment& radius) : radius_(radius){};
double Circle::Area() {
    return pow(radius_.length_,2) * PI;
}

int main(void) {
    LineSegment radius(3);
    Circle circle(radius);
    std::cout << circle.Area();
    assert((int)circle.Area() == 28);
    return 0;
}