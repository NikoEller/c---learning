#include <algorithm>
#include <cstddef>
#include <iostream>
#include <stdexcept>
#include <string>
#include <utility>

class IntBuffer {
public:
    IntBuffer(std::size_t new_size, int initial_value)
        : size(new_size), data(new int[new_size]) {
        std::fill(data, data + size, initial_value);
        std::cout << "Konstruktor: Buffer mit " << size << " Elementen erzeugt.\n";
    }

    ~IntBuffer() {
        std::cout << "Destruktor: Buffer wird freigegeben.\n";
        delete[] data;
    }

    IntBuffer(const IntBuffer& other)
        : size(other.size), data(new int[other.size]) {
        std::copy(other.data, other.data + size, data);
        std::cout << "Copy-Konstruktor: tiefe Kopie erstellt.\n";
    }

    IntBuffer& operator=(const IntBuffer& other) {
        std::cout << "Copy-Assignment: vorhandenen Buffer ueberschreiben.\n";

        if (this != &other) {
            int* new_data = new int[other.size];
            std::copy(other.data, other.data + other.size, new_data);

            delete[] data;
            data = new_data;
            size = other.size;
        }

        return *this;
    }

    IntBuffer(IntBuffer&& other) noexcept
        : size(other.size), data(other.data) {
        std::cout << "Move-Konstruktor: Besitz wird uebernommen.\n";
        other.size = 0;
        other.data = nullptr;
    }

    IntBuffer& operator=(IntBuffer&& other) noexcept {
        std::cout << "Move-Assignment: Besitz wird uebertragen.\n";

        if (this != &other) {
            delete[] data;
            size = other.size;
            data = other.data;

            other.size = 0;
            other.data = nullptr;
        }

        return *this;
    }

    void set(std::size_t index, int value) {
        if (index >= size) {
            throw std::out_of_range("Index ausserhalb des Buffers.");
        }

        data[index] = value;
    }

    void print(const std::string& label) const {
        std::cout << label << ": ";

        if (data == nullptr) {
            std::cout << "(kein Besitz mehr)\n";
            return;
        }

        for (std::size_t index = 0; index < size; ++index) {
            std::cout << data[index] << ' ';
        }
        std::cout << '\n';
    }

private:
    std::size_t size;
    int* data;
};

IntBuffer create_buffer() {
    IntBuffer temp(3, 7);
    temp.set(1, 42);
    return temp;
}

int main() {
    std::cout << "=== Tiefe Kopie ===\n";
    IntBuffer original(4, 1);
    original.set(2, 99);
    IntBuffer copied = original;
    copied.set(0, 500);

    original.print("Original");
    copied.print("Kopie");

    std::cout << "\n=== Move-Konstruktor ===\n";
    IntBuffer moved_from_function = create_buffer();
    moved_from_function.print("Aus Funktion erhalten");

    std::cout << "\n=== Move-Assignment ===\n";
    IntBuffer receiver(2, -1);
    receiver = std::move(moved_from_function);
    receiver.print("Receiver nach move");
    moved_from_function.print("Quelle nach move");

    return 0;
}
