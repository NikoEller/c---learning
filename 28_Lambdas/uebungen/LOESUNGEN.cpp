#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    auto multiply = [](int a, int b) {
        return a * b;
    };

    std::cout << multiply(3, 5) << '\n';

    std::vector<int> values = {2, 9, 1};
    std::sort(values.begin(), values.end(), [](int a, int b) {
        return a > b;
    });

    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    return 0;
}
