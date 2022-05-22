#include <iostream>
#include <string>
#include <cassert>
#include "animal.h"

class Animal {
protected:
    std::string color;
    std::string name;
    int age;
public:
    std::string GetColor() {return color;}
    std::string GetName() {return name;}
    int GetAge() {return age;}
    bool validate();
};

class Snake : public Animal {
private:
    int length;
public:
    Snake(std::string c, std::string n, int a, int l) : length(l) {
        color = c; name = n; age = a;
        validate();
    };
    void MakeSound() {
        std::cout << "Snake make sound" << "\n";
    }
    int GetLength() {return length;}
};

class Cat : public Animal {
private:
    int height;
public:
    Cat(std::string color, std::string name, int age, int height) : height(height) {
            this->color = color; this->name = name; this->age = age;
            validate();
    };
    void MakeSound() {
        std::cout << "Cat make sound" << "\n";
    }
    int GetHeight() {return height;}
};

bool Animal::validate() {
    return true;
}

int main() {
    Snake snake("black", "snake", 5, 25);
    assert(snake.GetColor() == "black");
    assert(snake.GetName() == "snake");
    assert(snake.GetAge() == 5);
    assert(snake.GetLength() == 25);

    Cat cat("red", "cat", 6, 20);

    snake.MakeSound();
    cat.MakeSound();

    return 0;
}