#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {2, 4, 6, 8};

    std::cout << "=== Klassische Schleife ===\n";
    for (std::size_t i = 0; i < values.size(); i++) {
        std::cout << "Index " << i << ": " << values[i] << '\n';
    }

    std::cout << "\n=== Range-based Schleife ===\n";
    for (int value : values) {
        std::cout << "Wert: " << value << '\n';
    }

    std::cout << "\n=== Werte direkt veraendern ===\n";
    for (int& value : values) {
        value *= 2;
    }

    for (const int& value : values) {
        std::cout << "Neuer Wert: " << value << '\n';
    }

    return 0;
}
