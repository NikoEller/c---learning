#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    auto add = [](int a, int b) {
        return a + b;
    };

    std::cout << "=== Einfache Lambda ===\n";
    std::cout << "3 + 4 = " << add(3, 4) << '\n';

    std::vector<int> values = {5, 1, 8, 3};

    std::cout << "\n=== Lambda mit std::sort ===\n";
    std::sort(values.begin(), values.end(), [](int a, int b) {
        return a > b;
    });

    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    std::cout << "\n=== Capture-Beispiel ===\n";
    int factor = 10;
    auto multiply = [factor](int value) {
        return value * factor;
    };

    std::cout << "6 * factor = " << multiply(6) << '\n';

    return 0;
}
