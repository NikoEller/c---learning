#include <iostream>

template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    std::cout << "max(4, 9) = " << maximum(4, 9) << '\n';
    std::cout << "max(3.5, 2.1) = " << maximum(3.5, 2.1) << '\n';
    return 0;
}
