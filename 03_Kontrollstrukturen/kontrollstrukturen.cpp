#include <iostream>

int main() {
    int number = 7;

    std::cout << "=== if / else ===\n";
    if (number % 2 == 0) {
        std::cout << number << " ist gerade.\n";
    } else {
        std::cout << number << " ist ungerade.\n";
    }

    std::cout << "\n=== switch ===\n";
    int day = 2;
    switch (day) {
        case 1:
            std::cout << "Montag\n";
            break;
        case 2:
            std::cout << "Dienstag\n";
            break;
        default:
            std::cout << "Anderer Tag\n";
            break;
    }

    std::cout << "\n=== for-Schleife ===\n";
    for (int i = 1; i <= 3; i++) {
        std::cout << "for Durchlauf: " << i << '\n';
    }

    std::cout << "\n=== while-Schleife ===\n";
    int counter = 0;
    while (counter < 2) {
        std::cout << "while Durchlauf: " << counter << '\n';
        counter++;
    }

    return 0;
}
