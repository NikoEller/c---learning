#include <iostream>

// In einem echten Projekt wuerde diese Deklaration in einer Header-Datei stehen.
int add(int a, int b);

// In einem echten Projekt wuerde diese Definition in einer separaten .cpp-Datei stehen.
int add(int a, int b) {
    return a + b;
}

int main() {
    std::cout << "2 + 3 = " << add(2, 3) << '\n';
    std::cout << "Dieses Beispiel zeigt die Idee von Deklaration und Definition.\n";
    return 0;
}
