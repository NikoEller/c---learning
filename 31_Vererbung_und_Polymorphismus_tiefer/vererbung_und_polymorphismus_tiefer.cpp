#include <iostream>
#include <memory>
#include <vector>

class Animal {
public:
    virtual ~Animal() = default;

    virtual void speak() const {
        std::cout << "Ein Tier macht ein Geraeusch.\n";
    }
};

class Dog : public Animal {
public:
    void speak() const override {
        std::cout << "Der Hund sagt: Wuff\n";
    }
};

class Cat : public Animal {
public:
    void speak() const override {
        std::cout << "Die Katze sagt: Miau\n";
    }
};

int main() {
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());

    std::cout << "=== Polymorphismus ===\n";
    for (const auto& animal : animals) {
        animal->speak();
    }

    return 0;
}
