#include <iostream>

int main() {
    int a = 10;
    int b = 3;

    std::cout << "=== Rechenoperatoren ===\n";
    std::cout << "a + b = " << a + b << '\n';
    std::cout << "a - b = " << a - b << '\n';
    std::cout << "a * b = " << a * b << '\n';
    std::cout << "a / b = " << a / b << '\n';
    std::cout << "a % b = " << a % b << "\n\n";

    std::cout << "=== Vergleichsoperatoren ===\n";
    std::cout << std::boolalpha;
    std::cout << "a > b  = " << (a > b) << '\n';
    std::cout << "a == b = " << (a == b) << '\n';
    std::cout << "a != b = " << (a != b) << "\n\n";

    std::cout << "=== Logische Operatoren ===\n";
    bool hasTicket = true;
    bool isAdult = true;
    std::cout << "hasTicket && isAdult = " << (hasTicket && isAdult) << '\n';
    std::cout << "!hasTicket = " << (!hasTicket) << '\n';

    return 0;
}
