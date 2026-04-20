#include <iostream>

int main() {
    int a = 20;
    int b = 4;

    if (b != 0) {
        std::cout << a / b << '\n';
    } else {
        std::cout << "Division nicht moeglich\n";
    }
    return 0;
}
