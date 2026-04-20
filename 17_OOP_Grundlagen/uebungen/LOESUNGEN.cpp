#include <iostream>

class Animal {
public:
    void speak() const {
        std::cout << "Tierlaut\n";
    }
};

class Cat : public Animal {
public:
    void meow() const {
        std::cout << "Miau\n";
    }
};

int main() {
    Cat cat;
    cat.speak();
    cat.meow();
    return 0;
}
