#include <iostream>
#include <stdexcept>
#include <string>

double divide(double a, double b) {
    if (b == 0.0) {
        throw std::runtime_error("Division durch 0 ist nicht erlaubt.");
    }
    return a / b;
}

int parsePositiveNumber(const std::string& text) {
    int value = std::stoi(text);
    if (value < 0) {
        throw std::invalid_argument("Die Zahl darf nicht negativ sein.");
    }
    return value;
}

int main() {
    std::cout << "=== Beispiel 1: Division ===\n";
    try {
        std::cout << "10 / 2 = " << divide(10, 2) << '\n';
        std::cout << "10 / 0 = " << divide(10, 0) << '\n';
    } catch (const std::runtime_error& error) {
        std::cout << "Fehler abgefangen: " << error.what() << '\n';
    }

    std::cout << "\n=== Beispiel 2: Eingabe pruefen ===\n";
    try {
        std::cout << "Gueltiger Wert: " << parsePositiveNumber("25") << '\n';
        std::cout << "Gueltiger Wert: " << parsePositiveNumber("-3") << '\n';
    } catch (const std::invalid_argument& error) {
        std::cout << "Ungueltige Eingabe: " << error.what() << '\n';
    } catch (const std::exception& error) {
        std::cout << "Allgemeiner Fehler: " << error.what() << '\n';
    }

    return 0;
}
