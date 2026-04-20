#include <iostream>

// In einem echten Projekt wuerde diese Deklaration in einer Header-Datei stehen.
int add(int a, int b);
void printResult(int left, int right);

// In einem echten Projekt wuerde diese Definition in einer separaten .cpp-Datei stehen.
int add(int a, int b) {
    return a + b;
}

void printResult(int left, int right) {
    std::cout << left << " + " << right << " = " << add(left, right) << '\n';
}

int main() {
    std::cout << "=== Deklaration und Definition ===\n";
    printResult(2, 3);
    printResult(10, 15);
    std::cout << "Dieses Beispiel zeigt die Idee hinter Headern und Quelldateien.\n";
    return 0;
}
