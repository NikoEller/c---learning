#include <iostream>

void printValue(const int& value) {
    std::cout << "Wert: " << value << '\n';
}

int main() {
    // Konstante Variable: darf nicht mehr geaendert werden.
    const int maxValue = 100;

    printValue(maxValue);

    // Auch normale Variablen koennen als const-Referenz uebergeben werden,
    // wenn die Funktion sie nur lesen soll.
    int currentValue = 42;
    printValue(currentValue);

    return 0;
}
