#include <iostream>
#include <vector>

int main() {
    std::cout << "=== Array ===\n";

    // Ein Array mit fester Groesse.
    int numbers[3] = {1, 2, 3};

    std::cout << "numbers[0] = " << numbers[0] << '\n';
    std::cout << "numbers[1] = " << numbers[1] << '\n';
    std::cout << "numbers[2] = " << numbers[2] << "\n\n";

    std::cout << "=== std::vector ===\n";

    // Ein Vector kann spaeter erweitert werden.
    std::vector<int> values = {10, 20, 30, 40};
    values.push_back(50);

    std::cout << "Anzahl Elemente im Vector: " << values.size() << '\n';
    std::cout << "Alle Elemente: ";

    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << "\n\n";

    std::cout << "=== Vergleich ===\n";
    std::cout << "Array-Groesse ist fest.\n";
    std::cout << "Vector-Groesse kann wachsen.\n";

    return 0;
}
