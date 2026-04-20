#include <iostream>

int main() {
    int x = 12;
    int y = 5;

    std::cout << x + y << '\n';
    std::cout << x - y << '\n';
    std::cout << x * y << '\n';
    std::cout << std::boolalpha << (x > 100) << '\n';
    return 0;
}
