#include <iostream>
#include <string>

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void greet(const std::string& name) {
    std::cout << "Hallo, " << name << "!\n";
}

int main() {
    std::cout << "=== Funktionen ===\n";

    greet("Niko");

    int first = 3;
    int second = 4;

    std::cout << first << " + " << second << " = " << add(first, second) << '\n';
    std::cout << first << " * " << second << " = " << multiply(first, second) << '\n';

    return 0;
}
