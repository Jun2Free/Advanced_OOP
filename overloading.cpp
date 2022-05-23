#include <iostream>
#include <string>

void hello() {
    std::cout << "Hello, World!" << "\n";
}

class Human {
public:
    void hello(std::string name) {
        std::cout << "Hello ," << name << "\n";
    }
};

class Age {
public:
    void hello(int age) {
        std::cout << "Hello, " << age << "\n";
    }
};

class Gender {
public:
    void hello(std::string sex) {
        std::cout << "Hello, " << sex << "\n";
    }
};

int main(void) {
    hello();
    Human human;
    human.hello("Jun");
    Age age;
    age.hello(32);
    Gender gender;
    gender.hello("male");

    return 0;
}