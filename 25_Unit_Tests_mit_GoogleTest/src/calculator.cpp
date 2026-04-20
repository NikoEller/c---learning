#include "calculator.h"

#include <stdexcept>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw std::invalid_argument("Division durch 0 ist nicht erlaubt.");
    }

    return dividend / divisor;
}

double average(const std::vector<int>& values) {
    if (values.empty()) {
        throw std::invalid_argument("Der Durchschnitt eines leeren Vektors ist nicht definiert.");
    }

    int sum = 0;
    for (int value : values) {
        sum += value;
    }

    return static_cast<double>(sum) / static_cast<double>(values.size());
}

bool is_even(int value) {
    return value % 2 == 0;
}
