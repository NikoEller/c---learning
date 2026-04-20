#include <iostream>
#include <string>

class Car {
public:
    std::string brand;
    int year;

    void print() const {
        std::cout << "Auto: " << brand << " (" << year << ")\n";
    }
};

int main() {
    // Ein Objekt ist eine konkrete Instanz der Klasse Car.
    Car firstCar;
    firstCar.brand = "BMW";
    firstCar.year = 2020;

    Car secondCar;
    secondCar.brand = "Audi";
    secondCar.year = 2022;

    firstCar.print();
    secondCar.print();

    return 0;
}
