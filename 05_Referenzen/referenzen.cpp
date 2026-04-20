#include <iostream>

void addTen(int& value) {
    value += 10;
}

void swapValues(int& left, int& right) {
    const int temp = left;
    left = right;
    right = temp;
}

void printValue(const int& value) {
    std::cout << "Nur lesen ueber const-Referenz: " << value << '\n';
}

int main() {
    int number = 5;

    // ref ist ein zweiter Name fuer number.
    int& ref = number;

    std::cout << "Startwert: " << number << '\n';

    // Aenderung ueber die Referenz.
    ref = 20;
    std::cout << "Nach ref = 20: " << number << '\n';

    // Aenderung ueber eine Funktion mit Referenzparameter.
    addTen(number);
    std::cout << "Nach addTen(number): " << number << '\n';

    // const-Referenzen sind praktisch, wenn etwas nur gelesen werden soll.
    printValue(number);

    int first = 3;
    int second = 9;
    std::cout << "Vor swap: first = " << first << ", second = " << second << '\n';
    swapValues(first, second);
    std::cout << "Nach swap: first = " << first << ", second = " << second << '\n';

    return 0;
}
