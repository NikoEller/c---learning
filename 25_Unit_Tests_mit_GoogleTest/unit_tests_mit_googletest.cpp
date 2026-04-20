#include <exception>
#include <iostream>
#include <vector>

#include "calculator.h"

int main() {
    std::cout << "=== Beispielcode fuer GoogleTest-Thema ===\n";

    std::cout << "add(2, 3) = " << add(2, 3) << '\n';
    std::cout << "subtract(10, 4) = " << subtract(10, 4) << '\n';
    std::cout << "multiply(6, 7) = " << multiply(6, 7) << '\n';
    std::cout << "divide(20, 5) = " << divide(20, 5) << '\n';

    const std::vector<int> values = {2, 4, 6, 8};
    std::cout << "average({2, 4, 6, 8}) = " << average(values) << '\n';
    std::cout << "is_even(8) = " << is_even(8) << '\n';

    try {
        std::cout << "Versuche divide(10, 0) ...\n";
        std::cout << divide(10, 0) << '\n';
    } catch (const std::exception& exception) {
        std::cout << "Exception abgefangen: " << exception.what() << '\n';
    }

    std::cout << "\nDiese Datei zeigt die Funktionen, die im Testprojekt geprueft werden.\n";
    return 0;
}
