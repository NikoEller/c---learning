#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {4, 1, 4, 3};
    std::sort(values.begin(), values.end());

    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    std::cout << std::count(values.begin(), values.end(), 4) << '\n';
    return 0;
}
