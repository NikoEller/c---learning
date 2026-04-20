#include <iostream>

void innerBlockExample() {
    std::cout << "Start innerBlockExample\n";

    {
        int localValue = 5;
        std::cout << "localValue existiert hier und hat den Wert: " << localValue << '\n';
    }

    std::cout << "Nach dem Block existiert localValue nicht mehr.\n";
}

int main() {
    int value = 10;

    std::cout << "=== Speicher und Lebensdauer ===\n";
    std::cout << "Lokale Variable in main: " << value << '\n';

    innerBlockExample();

    std::cout << "\nGefaehrliches Muster nur als Erinnerung:\n";
    std::cout << "Nie die Adresse einer lokalen Variable aus einer Funktion zurueckgeben.\n";

    return 0;
}
