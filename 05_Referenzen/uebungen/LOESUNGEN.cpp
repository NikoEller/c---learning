#include <iostream>

void doubleValue(int& x) {
    x *= 2;
}

int main() {
    int value = 8;
    int& ref = value;
    ref = 10;
    doubleValue(value);
    std::cout << value << '\n';
    return 0;
}
