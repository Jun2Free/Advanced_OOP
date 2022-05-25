// Templates enable generic programming by generalizing a function to apply to any class
// Specifically, templates use types as parameters so that the same implementation can operate on different data types

// Rather than writing and maintaining the multiple function declaration, each
// accepting slightly different arguments, you can write one function and pass the argument types as parameters.

#include <iostream>
#include <string>

template <typename Type> Type Sum(Type a, Type b) { return a + b; }
template <typename Type> Type Mul(Type a, Type b) { return a * b; }

int main(void) {
    std::cout << Sum<double>(20.3, 13.7) << "\n";
    std::cout << Sum<char>('Z', 'j') << "\n";
    std::cout << Mul<int>(10,2) << "\n";
}