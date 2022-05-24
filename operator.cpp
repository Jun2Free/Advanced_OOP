#include <assert.h>

class Point {
public:
    Point(int x = 0, int y = 0) : x_(x), y_(y){};
    Point operator+(const Point& addend) {
        Point sum;
        sum.x_ = x_ + addend.x_;
        sum.y_ = y_ + addend.y_;
        return sum;
    }
    int x_, y_;
};

int main(void) {
    Point p1(10, 5), p2(2, 4);
    Point p3 = p1 + p2;
    assert(p3.x_ == p1.x_ + p2.x_);
    assert(p3.y_ == p1.y_ + p2.y_);
}