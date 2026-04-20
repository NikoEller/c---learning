#include <iostream>

void printValue(const int& value) {
    std::cout << "Wert: " << value << '\n';
}

class Counter {
public:
    explicit Counter(int startValue) : value(startValue) {}

    void increment() {
        ++value;
    }

    int get() const {
        return value;
    }

private:
    int value;
};

int main() {
    // Konstante Variable: darf nicht mehr geaendert werden.
    const int maxValue = 100;

    printValue(maxValue);

    // Auch normale Variablen koennen als const-Referenz uebergeben werden,
    // wenn die Funktion sie nur lesen soll.
    int currentValue = 42;
    printValue(currentValue);

    Counter counter(5);
    counter.increment();
    std::cout << "Counter nach increment(): " << counter.get() << '\n';

    return 0;
}
