#include <iostream>
#include <memory>
#include <string>
#include <vector>

class Animal {
public:
    virtual ~Animal() = default;

    virtual std::string type() const {
        return "Tier";
    }

    virtual void speak() const {
        std::cout << "Ein Tier macht ein Geraeusch.\n";
    }

    virtual int daily_food_grams() const {
        return 0;
    }
};

class Dog : public Animal {
public:
    std::string type() const override {
        return "Hund";
    }

    void speak() const override {
        std::cout << "Der Hund sagt: Wuff\n";
    }

    int daily_food_grams() const override {
        return 350;
    }
};

class Cat : public Animal {
public:
    std::string type() const override {
        return "Katze";
    }

    void speak() const override {
        std::cout << "Die Katze sagt: Miau\n";
    }

    int daily_food_grams() const override {
        return 180;
    }
};

void present_animal(const Animal& animal) {
    std::cout << animal.type() << ": ";
    animal.speak();
    std::cout << "Taeglicher Futterbedarf: " << animal.daily_food_grams() << " Gramm\n";
}

int main() {
    std::cout << "=== Polymorphismus ueber Referenzen ===\n";
    Dog dog;
    Cat cat;
    present_animal(dog);
    present_animal(cat);

    std::cout << "\n=== Polymorphismus ueber Basisklassenzeiger ===\n";
    std::vector<std::unique_ptr<Animal>> animals;
    animals.push_back(std::make_unique<Dog>());
    animals.push_back(std::make_unique<Cat>());

    int total_food = 0;
    for (const auto& animal : animals) {
        animal->speak();
        total_food += animal->daily_food_grams();
    }

    std::cout << "Gesamter taeglicher Futterbedarf: " << total_food << " Gramm\n";
    return 0;
}
