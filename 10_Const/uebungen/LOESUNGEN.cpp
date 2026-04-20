#include <iostream>

void show(const int& x) {
    std::cout << x << '\n';
}

int main() {
    const int value = 42;
    show(value);
    return 0;
}
