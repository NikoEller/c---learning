#include <iostream>

class Vehicle {
public:
    virtual ~Vehicle() = default;

    virtual void drive() const {
        std::cout << "Ein Fahrzeug bewegt sich.\n";
    }
};

class Car : public Vehicle {
public:
    void drive() const override {
        std::cout << "Das Auto faehrt.\n";
    }
};

class Bike : public Vehicle {
public:
    void drive() const override {
        std::cout << "Das Fahrrad faehrt.\n";
    }
};

int main() {
    Car car;
    Bike bike;
    car.drive();
    bike.drive();
    return 0;
}
