#include <algorithm>
#include <iostream>
#include <vector>

void printVector(const std::vector<int>& values, const std::string& label) {
    std::cout << label << ": ";
    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> values = {5, 2, 9, 1, 2};

    std::cout << "=== Originaldaten ===\n";
    printVector(values, "Werte");

    std::cout << "\n=== std::sort ===\n";
    std::sort(values.begin(), values.end());
    printVector(values, "Sortiert");

    std::cout << "\n=== std::count ===\n";
    int countTwos = static_cast<int>(std::count(values.begin(), values.end(), 2));
    std::cout << "Anzahl der 2en: " << countTwos << '\n';

    std::cout << "\n=== std::find ===\n";
    auto it = std::find(values.begin(), values.end(), 9);
    if (it != values.end()) {
        std::cout << "Die 9 wurde gefunden.\n";
    }

    std::cout << "\n=== std::reverse ===\n";
    std::reverse(values.begin(), values.end());
    printVector(values, "Umgedreht");

    std::cout << "\n=== std::for_each ===\n";
    std::for_each(values.begin(), values.end(), [](int value) {
        std::cout << "Element: " << value << '\n';
    });

    return 0;
}
