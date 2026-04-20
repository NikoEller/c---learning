#include <iostream>

void addTen(int& value) {
    value += 10;
}

void setToHundred(int& value) {
    value = 100;
}

int main() {
    int number = 5;

    // ref ist ein zweiter Name fuer number.
    int& ref = number;

    std::cout << "Startwert: " << number << '\n';

    // Aenderung ueber die Referenz.
    ref = 20;
    std::cout << "Nach ref = 20: " << number << '\n';

    // Aenderung ueber eine Funktion.
    addTen(number);
    std::cout << "Nach addTen(number): " << number << '\n';

    setToHundred(ref);
    std::cout << "Nach setToHundred(ref): " << number << '\n';

    return 0;
}
