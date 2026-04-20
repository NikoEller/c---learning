#include <iostream>
#include <memory>

struct Box {
    int value;

    Box(int v) : value(v) {
        std::cout << "Box mit Wert " << value << " wurde erzeugt.\n";
    }

    ~Box() {
        std::cout << "Box mit Wert " << value << " wurde zerstoert.\n";
    }
};

int main() {
    std::cout << "=== unique_ptr ===\n";
    {
        auto uniqueBox = std::make_unique<Box>(42);
        std::cout << "unique_ptr besitzt: " << uniqueBox->value << '\n';
    }

    std::cout << "\n=== shared_ptr ===\n";
    {
        auto sharedBox = std::make_shared<Box>(99);
        std::cout << "Besitzer nach Erstellung: " << sharedBox.use_count() << '\n';

        std::shared_ptr<Box> anotherOwner = sharedBox;
        std::cout << "Besitzer nach Kopie: " << sharedBox.use_count() << '\n';
        std::cout << "Wert ueber zweiten Besitzer: " << anotherOwner->value << '\n';
    }

    std::cout << "\n=== weak_ptr ===\n";
    {
        auto sharedBox = std::make_shared<Box>(7);
        std::weak_ptr<Box> observer = sharedBox;

        if (auto locked = observer.lock()) {
            std::cout << "weak_ptr kann noch zugreifen: " << locked->value << '\n';
        }
    }

    return 0;
}
