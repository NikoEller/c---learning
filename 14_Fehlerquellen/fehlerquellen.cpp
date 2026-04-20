#include <iostream>

int main() {
    std::cout << "=== Typische Fehlerquellen ===\n";

    // Gute Gewohnheit: direkt initialisieren.
    int initialized = 10;
    int divisor = 2;

    if (divisor != 0) {
        std::cout << "Sichere Division: " << initialized / divisor << '\n';
    }

    std::cout << "Behalte im Kopf:\n";
    std::cout << "- keine uninitialisierten Variablen\n";
    std::cout << "- keine Division durch 0\n";
    std::cout << "- keine ungueltigen Indizes\n";

    return 0;
}
