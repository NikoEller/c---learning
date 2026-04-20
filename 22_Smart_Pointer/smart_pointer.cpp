#include <iostream>
#include <memory>

int main() {
    auto uniqueValue = std::make_unique<int>(42);
    std::cout << "unique_ptr Wert: " << *uniqueValue << '\n';

    auto sharedValue = std::make_shared<int>(99);
    std::shared_ptr<int> anotherOwner = sharedValue;

    std::cout << "shared_ptr Wert: " << *sharedValue << '\n';
    std::cout << "Anzahl Besitzer: " << sharedValue.use_count() << '\n';

    return 0;
}
