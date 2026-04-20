#include <iostream>
#include <string>

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template <typename T>
void printPair(T a, T b) {
    std::cout << "[" << a << ", " << b << "]\n";
}

int main() {
    std::cout << "=== Funktions-Template maximum ===\n";
    std::cout << "max(4, 9) = " << maximum(4, 9) << '\n';
    std::cout << "max(3.5, 2.1) = " << maximum(3.5, 2.1) << '\n';
    std::cout << "max('a', 'z') = " << maximum('a', 'z') << '\n';

    std::cout << "\n=== Template mit mehreren Typinstanzen ===\n";
    printPair(10, 20);
    printPair(1.5, 4.8);
    printPair(std::string("Hallo"), std::string("Welt"));

    return 0;
}
