#include <iostream>

class Animal {
public:
    void speak() const {
        std::cout << "Ein Tier macht ein Geraeusch.\n";
    }
};

class Dog : public Animal {
public:
    void bark() const {
        std::cout << "Wuff\n";
    }
};

int main() {
    std::cout << "=== OOP Grundlagen ===\n";

    // Dog ist ein speziellerer Typ, der von Animal erbt.
    Dog dog;

    // Methode aus der Basisklasse.
    dog.speak();

    // Eigene Methode der abgeleiteten Klasse.
    dog.bark();

    return 0;
}
