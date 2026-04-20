#include <iostream>
#include <stdexcept>

double divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Division durch 0 ist nicht erlaubt.");
    }
    return a / b;
}

int main() {
    try {
        std::cout << "10 / 2 = " << divide(10, 2) << '\n';
        std::cout << "10 / 0 = " << divide(10, 0) << '\n';
    } catch (const std::runtime_error& error) {
        std::cout << "Fehler abgefangen: " << error.what() << '\n';
    }

    return 0;
}
