#include <iostream>
#include <memory>

int main() {
    auto ptr = std::make_unique<int>(7);
    std::cout << *ptr << '\n';

    auto shared = std::make_shared<int>(11);
    auto copy = shared;
    std::cout << shared.use_count() << '\n';
    return 0;
}
