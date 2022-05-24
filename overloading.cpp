// overloading: return type and name are same but parameters are diffent.
// oberriding: subclass 에서 base class 의 형태와 동일하게 선언하여 사용

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