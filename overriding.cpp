#include <iostream>
#include <string>

// virtual 함수가 sub-class 에서 정의되지 않으면 해당 class 는 abstrat class 가 되어
// 객체 생성이 불가능한 class 가 된다.
// virtual 을 사용하는 경우는 일단 기본이 되는 base class 를 선언해 두고,
// 그 class 는 interface 정도로 사용하는 경우?
// overriding and hiding 차이점은?

class Animal {
public:
    virtual std::string Talk() const = 0;
};

class Cat : Animal {
public:
    std::string Talk() const { return std::string("Meow"); }
};

class Dog : Animal {
public:
    std::string Talk() const { return std::string("Woof"); }
};

int main(void) {
    // Animal random;
    Cat cat;
    std::cout << cat.Talk();

    Dog dog;
    assert(dog.Talk() == "Woof");
}