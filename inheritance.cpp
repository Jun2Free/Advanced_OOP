// public inheritance
// protected inheritance
// private inheritance

// This example demonstrates the privacy levels
// between parent and child classes
#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";

    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public:
    bool sunroof = false;
};

class Bicycle : protected Vehicle {
public:
    bool kickstand = true;
};

class Scooter : private Vehicle {
public:
    bool electric = false;
};

int main()
{
    Car car;
    car.wheels = 4;
    car.color = "red";
    std::cout << car.sunroof << "\n";
    car.Print();

    // In protected case, It is not accessible to base class from the inherited class
    // but, it is accessible to the inherited class from other functions.
    Bicycle bicycle;
    bicycle.wheels = 2;                         // not accessible
    bicycle.color = "yellow";                   // not accessible
    std::cout << bicycle.kickstand << "\n";
    bicycle.Print();                            // not accessible

    // In Private case, It is not accessible to base class from the inherited class
    Scooter scooter;
    scooter.wheels = 2;                         // not accessible
    scooter.color = "black";                    // not accessible
    std::cout << scooter.electric << "\n";
    scooter.Print();                            // not accessible
};