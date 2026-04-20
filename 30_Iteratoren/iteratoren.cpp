#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> values = {10, 20, 30, 40, 50};

    std::cout << "=== Iteratoren manuell durchlaufen ===\n";
    for (auto it = values.begin(); it != values.end(); ++it) {
        std::cout << *it << '\n';
    }

    std::cout << "\n=== Einen Iterator weiterbewegen ===\n";
    auto second = values.begin();
    std::advance(second, 1);
    std::cout << "Nach std::advance zeigt der Iterator auf: " << *second << '\n';

    std::cout << "\n=== std::find liefert einen Iterator zurueck ===\n";
    auto found = std::find(values.begin(), values.end(), 30);
    if (found != values.end()) {
        std::cout << "Gefundenes Element: " << *found << '\n';
    }

    std::cout << "\n=== Const-Iteratoren ===\n";
    const std::vector<int>& read_only_values = values;
    for (auto it = read_only_values.cbegin(); it != read_only_values.cend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';

    std::cout << "\n=== Reverse-Iteratoren ===\n";
    for (auto it = values.rbegin(); it != values.rend(); ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';

    std::cout << "\nMerke: end() zeigt hinter das letzte Element und darf nicht dereferenziert werden.\n";
    return 0;
}
