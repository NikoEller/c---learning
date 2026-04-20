#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {10, 20, 30, 40};

    std::cout << "=== Iteratoren manuell durchlaufen ===\n";
    for (auto it = values.begin(); it != values.end(); ++it) {
        std::cout << *it << '\n';
    }

    std::cout << "\n=== Iterator auf ein bestimmtes Element ===\n";
    auto it = values.begin();
    ++it;
    std::cout << "Nach einem ++ zeigt it auf: " << *it << '\n';

    std::cout << "\n=== begin und end Konzept ===\n";
    std::cout << "begin zeigt auf das erste Element.\n";
    std::cout << "end zeigt hinter das letzte Element.\n";

    return 0;
}
