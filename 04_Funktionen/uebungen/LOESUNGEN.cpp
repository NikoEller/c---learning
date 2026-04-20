#include <iostream>
#include <string>

int square(int x) {
    return x * x;
}

void printName(const std::string& name) {
    std::cout << name << '\n';
}

int main() {
    std::cout << square(6) << '\n';
    printName("Niko");
    return 0;
}
