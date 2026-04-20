#include <iostream>
#include <vector>

int main() {
    std::cout << "=== Typische Fehlerquellen ===\n";

    // Gute Gewohnheit: direkt initialisieren.
    int initialized = 10;
    int divisor = 2;

    if (divisor != 0) {
        std::cout << "Sichere Division: " << initialized / divisor << '\n';
    }

    std::vector<int> values = {3, 6, 9};
    std::size_t index = 2;

    if (index < values.size()) {
        std::cout << "Sicherer Indexzugriff: " << values[index] << '\n';
    }

    std::cout << "\nBehalte im Kopf:\n";
    std::cout << "- keine uninitialisierten Variablen\n";
    std::cout << "- keine Division durch 0\n";
    std::cout << "- keine ungueltigen Indizes\n";
    std::cout << "- Schleifenbedingungen genau pruefen\n";

    return 0;
}
