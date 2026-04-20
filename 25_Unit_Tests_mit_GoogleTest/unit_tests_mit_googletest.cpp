#include <iostream>

#include "calculator.h"

int main() {
    std::cout << "=== Beispielcode fuer GoogleTest-Thema ===\n";
    std::cout << "add(2, 3) = " << add(2, 3) << '\n';
    std::cout << "subtract(10, 4) = " << subtract(10, 4) << '\n';
    std::cout << "multiply(6, 7) = " << multiply(6, 7) << '\n';
    std::cout << "Diese Datei zeigt die Funktionen, die im Testprojekt geprueft werden.\n";
    return 0;
}
