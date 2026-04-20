#include <iostream>
#include <vector>

int main() {
    int arr[3] = {4, 5, 6};
    std::cout << arr[0] << ' ' << arr[1] << ' ' << arr[2] << '\n';

    std::vector<int> nums = {1, 2};
    nums.push_back(3);
    for (int n : nums) {
        std::cout << n << ' ';
    }
    std::cout << '\n';
    return 0;
}
