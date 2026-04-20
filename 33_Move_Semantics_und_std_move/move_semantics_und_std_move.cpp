#include <iostream>
#include <string>
#include <utility>
#include <vector>

int main() {
    std::cout << "=== Move mit std::string ===\n";
    std::string original = "Ein ziemlich langer Text";
    std::string movedTo = std::move(original);

    std::cout << "Neues Objekt: " << movedTo << '\n';
    std::cout << "Altes Objekt nach move: " << original << '\n';

    std::cout << "\n=== Move mit std::vector ===\n";
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::vector<int> newOwner = std::move(numbers);

    std::cout << "Groesse des neuen Vektors: " << newOwner.size() << '\n';
    std::cout << "Groesse des alten Vektors nach move: " << numbers.size() << '\n';

    return 0;
}
