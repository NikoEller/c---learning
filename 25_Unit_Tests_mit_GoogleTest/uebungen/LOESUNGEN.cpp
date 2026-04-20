#include <iostream>

int divide(int a, int b) {
    if (b == 0) {
        std::cout << "Division durch 0 ist ungueltig.\n";
        return 0;
    }
    return a / b;
}

int absolute_value(int value) {
    return (value < 0) ? -value : value;
}

int main() {
    std::cout << "divide(8, 2) = " << divide(8, 2) << '\n';
    std::cout << "divide(8, 0) = " << divide(8, 0) << '\n';
    std::cout << "absolute_value(-7) = " << absolute_value(-7) << '\n';
    std::cout << "absolute_value(0) = " << absolute_value(0) << '\n';
    return 0;
}
