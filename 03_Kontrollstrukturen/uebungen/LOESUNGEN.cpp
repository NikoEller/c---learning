#include <iostream>

int main() {
    int value = -4;
    if (value >= 0) {
        std::cout << "positiv oder null\n";
    } else {
        std::cout << "negativ\n";
    }

    for (int i = 1; i <= 5; i++) {
        std::cout << i << '\n';
    }
    return 0;
}
