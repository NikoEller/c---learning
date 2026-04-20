#include <iostream>

template <typename T>
T minimum(T a, T b) {
    return (a < b) ? a : b;
}

int main() {
    std::cout << minimum(3, 7) << '\n';
    std::cout << minimum(2.5, 9.1) << '\n';
    return 0;
}
