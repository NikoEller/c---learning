#include <array>
#include <iostream>
#include <string>
#include <utility>

int main() {
    std::array<int, 3> arr = {3, 6, 9};
    std::pair<std::string, int> player = {"Alex", 10};
    std::cout << arr[1] << '\n';
    std::cout << player.first << " " << player.second << '\n';
    return 0;
}
