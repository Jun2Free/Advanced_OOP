// Use multiple inheritance to represent multiple distinct interfaces
// Use multiple inheritance to represent the union of implementation attributes
// Diamond problem 를 야기할 수 있다.

#include <iostream>
#include <string>
#include <assert.h>

class Animal {
public:
    double age;
};

class Pet {
public:
    std::string name;
};

// Dog derives from *both* Animal and Pet
class Dog : public Animal, public Pet {
public:
    std::string breed;
};

class Cat : public Animal, public Pet {
public:
    Cat(std::string c, double a, std::string n) : color(c) {
        age = a;
        name = n;
    }
    std::string color;
};

int main()
{
    Cat cat("black", 10, "Max");
    assert(cat.color == "black");
    assert(cat.age == 10);
    assert(cat.name == "Max");
}