#include <iostream>
#include <vector>

int sumVector(const std::vector<int>& values) {
    int sum = 0;
    for (int value : values) {
        sum += value;
    }
    return sum;
}

int main() {
    std::vector<int> values = {2, 4, 6, 8};

    std::cout << "Setze einen Breakpoint in sumVector und starte das Programm im Debugger.\n";
    std::cout << "Summe: " << sumVector(values) << '\n';
    return 0;
}
