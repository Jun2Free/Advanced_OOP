#include <cassert>
#include <iostream>

// TODO: Declare Vehicle as the base class
class Vehicle {
public:
    Vehicle(){};
    void SetWheel(int wheel) { wheels_ = wheel;}
    int GetWheel() {return wheels_;}
    void SetSeat(int seat) { seats_ = seat;}
    int GetSeat() { return seats_;}
    void SetTrunk(int trunk) {if (trunk) trunk_ = trunk; else trunk_ = false;}
    bool GetTrunk() {return trunk_;}
protected:
    int wheels_;
    int seats_;
    bool trunk_;
};

class Car : public Vehicle {
};

class Sedan : public Car {
};

int main() {
    Vehicle vehicle;
    vehicle.SetSeat(5);
    Sedan sedan;
    sedan.SetSeat(4);

    std::cout << vehicle.GetSeat();
    std::cout << sedan.GetSeat();


    //assert(sedan.trunk_ == true);
    assert(sedan.GetSeat() == 4);
    //assert(sedan.wheels_ == 4);

}