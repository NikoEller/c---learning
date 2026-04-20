#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::cout << "=== Einfache Lambda ===\n";
    auto add = [](int a, int b) {
        return a + b;
    };
    std::cout << "3 + 4 = " << add(3, 4) << '\n';

    std::vector<int> values = {5, 1, 8, 3, 4};

    std::cout << "\n=== Lambda als Sortierregel ===\n";
    std::sort(values.begin(), values.end(), [](int left, int right) {
        return left > right;
    });

    for (int value : values) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    std::cout << "\n=== Capture per Wert mit std::transform ===\n";
    const int factor = 10;
    std::vector<int> scaled(values.size());

    std::transform(values.begin(), values.end(), scaled.begin(), [factor](int value) {
        return value * factor;
    });

    for (int value : scaled) {
        std::cout << value << ' ';
    }
    std::cout << '\n';

    std::cout << "\n=== Capture per Referenz ===\n";
    int sum = 0;
    std::for_each(values.begin(), values.end(), [&sum](int value) {
        sum += value;
    });
    std::cout << "Summe der sortierten Werte: " << sum << '\n';

    std::cout << "\n=== Mutable Lambda ===\n";
    auto next_id = [current = 0]() mutable {
        ++current;
        return current;
    };
    std::cout << "ID 1: " << next_id() << '\n';
    std::cout << "ID 2: " << next_id() << '\n';

    std::cout << "\n=== Generische Lambda ===\n";
    auto print_value = [](const auto& value) {
        std::cout << "Wert: " << value << '\n';
    };
    print_value(42);
    print_value(3.14);

    return 0;
}
