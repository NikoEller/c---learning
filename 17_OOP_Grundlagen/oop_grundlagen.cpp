#include <iostream>
#include <string>

class Animal {
public:
    explicit Animal(std::string animalName) : name(std::move(animalName)) {}

    void speak() const {
        std::cout << name << ": Ein Tier macht ein Geraeusch.\n";
    }

    const std::string& getName() const {
        return name;
    }

private:
    std::string name;
};

class Dog : public Animal {
public:
    explicit Dog(const std::string& dogName) : Animal(dogName) {}

    void bark() const {
        std::cout << "Wuff\n";
    }
};

int main() {
    std::cout << "=== OOP Grundlagen ===\n";

    // Dog ist ein speziellerer Typ, der von Animal erbt.
    Dog dog("Bello");

    // Methode aus der Basisklasse.
    dog.speak();

    // Eigene Methode der abgeleiteten Klasse.
    dog.bark();

    std::cout << "Name des Hundes: " << dog.getName() << '\n';

    return 0;
}
