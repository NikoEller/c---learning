#include <iostream>

class Buffer {
public:
    explicit Buffer(int v) : value(new int(v)) {
        std::cout << "Konstruktor: " << *value << '\n';
    }

    ~Buffer() {
        std::cout << "Destruktor\n";
        delete value;
    }

    Buffer(const Buffer& other) : value(new int(*other.value)) {
        std::cout << "Copy-Konstruktor\n";
    }

    Buffer& operator=(const Buffer& other) {
        std::cout << "Copy-Assignment\n";
        if (this != &other) {
            *value = *other.value;
        }
        return *this;
    }

    Buffer(Buffer&& other) noexcept : value(other.value) {
        std::cout << "Move-Konstruktor\n";
        other.value = nullptr;
    }

    Buffer& operator=(Buffer&& other) noexcept {
        std::cout << "Move-Assignment\n";
        if (this != &other) {
            delete value;
            value = other.value;
            other.value = nullptr;
        }
        return *this;
    }

    void print() const {
        if (value != nullptr) {
            std::cout << "Wert: " << *value << '\n';
        } else {
            std::cout << "Kein Wert mehr vorhanden.\n";
        }
    }

private:
    int* value;
};

Buffer createBuffer() {
    Buffer temp(99);
    return temp;
}

int main() {
    std::cout << "=== Copy ===\n";
    Buffer first(10);
    Buffer second = first;
    second.print();

    std::cout << "\n=== Move ===\n";
    Buffer third = createBuffer();
    third.print();

    return 0;
}
