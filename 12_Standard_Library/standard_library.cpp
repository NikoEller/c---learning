#include <array>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::array<int, 3> fixed = {1, 2, 3};
    std::vector<int> dynamic = {4, 5, 6};
    std::pair<std::string, int> person = {"Niko", 21};

    std::cout << "=== std::array ===\n";
    std::cout << fixed[0] << ", " << fixed[1] << ", " << fixed[2] << "\n\n";

    std::cout << "=== std::vector ===\n";
    dynamic.push_back(7);
    for (int value : dynamic) {
        std::cout << value << ' ';
    }
    std::cout << "\n\n";

    std::cout << "=== std::pair ===\n";
    std::cout << person.first << " ist " << person.second << " Jahre alt.\n";

    return 0;
}
