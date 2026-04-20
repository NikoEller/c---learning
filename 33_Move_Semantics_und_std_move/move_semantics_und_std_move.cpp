#include <iostream>
#include <string>
#include <utility>
#include <vector>

class DataBlock {
public:
    DataBlock(std::string new_label, std::size_t count)
        : label(std::move(new_label)), values(count, 1) {
        std::cout << "Konstruktor fuer " << label << " mit " << values.size() << " Werten\n";
    }

    DataBlock(const DataBlock& other)
        : label(other.label + " (Kopie)"), values(other.values) {
        std::cout << "Copy-Konstruktor aus " << other.label << '\n';
    }

    DataBlock(DataBlock&& other) noexcept
        : label(std::move(other.label)), values(std::move(other.values)) {
        std::cout << "Move-Konstruktor\n";
        other.label = "verschoben";
    }

    DataBlock& operator=(const DataBlock& other) {
        std::cout << "Copy-Assignment\n";
        if (this != &other) {
            label = other.label + " (zugewiesen)";
            values = other.values;
        }
        return *this;
    }

    DataBlock& operator=(DataBlock&& other) noexcept {
        std::cout << "Move-Assignment\n";
        if (this != &other) {
            label = std::move(other.label);
            values = std::move(other.values);
            other.label = "verschoben";
        }
        return *this;
    }

    void print_state(const std::string& prefix) const {
        std::cout << prefix << " -> Label: " << label
                  << ", Anzahl Werte: " << values.size() << '\n';
    }

private:
    std::string label;
    std::vector<int> values;
};

void consume_by_value(DataBlock block) {
    block.print_state("In consume_by_value");
}

DataBlock create_temporary_block() {
    DataBlock temp("temporaer", 5);
    return temp;
}

int main() {
    std::cout << "=== Copy gegen Move ===\n";
    DataBlock original("original", 10);

    std::cout << "\nKopie in eine neue Variable:\n";
    DataBlock copied = original;
    copied.print_state("Kopie");

    std::cout << "\nUebergabe per Wert ohne std::move:\n";
    consume_by_value(original);
    original.print_state("Original nach Copy");

    std::cout << "\nUebergabe per Wert mit std::move:\n";
    consume_by_value(std::move(original));
    original.print_state("Original nach Move");

    std::cout << "\nRueckgabe aus Funktion:\n";
    DataBlock from_function = create_temporary_block();
    from_function.print_state("Erhaltenes Objekt");

    std::cout << "\nMove-Assignment:\n";
    DataBlock receiver("receiver", 1);
    receiver = std::move(from_function);
    receiver.print_state("Receiver");
    from_function.print_state("Quelle nach Move-Assignment");

    return 0;
}
