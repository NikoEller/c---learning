#include <iostream>
#include <vector>

int main() {
    std::vector<int> nums = {1, 3, 5};
    for (std::size_t i = 0; i < nums.size(); i++) {
        std::cout << nums[i] << ' ';
    }
    std::cout << '\n';

    for (int num : nums) {
        std::cout << num << ' ';
    }
    std::cout << '\n';
    return 0;
}
