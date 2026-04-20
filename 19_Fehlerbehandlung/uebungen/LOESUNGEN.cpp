#include <iostream>
#include <stdexcept>

void checkPositive(int value) {
    if (value < 0) {
        throw std::runtime_error("Wert darf nicht negativ sein.");
    }
}

int main() {
    try {
        checkPositive(-5);
    } catch (const std::runtime_error& error) {
        std::cout << error.what() << '\n';
    }

    return 0;
}
