#include <iostream>
#include <math.h>
#define PI 3.141592

class VehicleModel {
    virtual void Move(double v, double phi) = 0;
};
class ParticleModel : VehicleModel {
public:
    ParticleModel(){}
    void Move(double v, double phi) override {
        theta_ += phi;
        x_ += v * cos(theta_);
        y_ += v * cos(theta_);
    }
    double x_ = 0;
    double y_ = 0;
    double theta_ = 0;
};

class BicycleModel : public ParticleModel {
public:
    BicycleModel() {}
    void Move(double v, double phi) override {
        theta_ += v / L * tan(phi);
        x_ += v * cos(theta_);
        y_ += v * cos(theta_);
    }
    double L = 1;
};

int main() {
    // Test function overriding
    ParticleModel particle;
    BicycleModel bicycle;
    particle.Move(10, PI / 9);
    bicycle.Move(10, PI / 9);
    assert(particle.x_ != bicycle.x_);
    assert(particle.y_ != bicycle.y_);
    assert(particle.theta_ != bicycle.theta_);
}
