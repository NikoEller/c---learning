#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values = {5, 2, 9, 1, 2};

    std::sort(values.begin(), values.end());

    std::cout << "Sortiert: ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    int countTwos = static_cast<int>(std::count(values.begin(), values.end(), 2));
    std::cout << "Anzahl der 2en: " << countTwos << '\n';

    auto it = std::find(values.begin(), values.end(), 9);
    if (it != values.end()) {
        std::cout << "Die 9 wurde gefunden.\n";
    }

    return 0;
}
