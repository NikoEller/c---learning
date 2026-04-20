#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {4, 8, 12};
    for (auto it = values.begin(); it != values.end(); ++it) {
        std::cout << *it << '\n';
    }
    return 0;
}
