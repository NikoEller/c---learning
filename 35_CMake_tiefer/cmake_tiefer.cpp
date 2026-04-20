#include <iostream>

#include "message.h"

int main() {
    std::cout << build_message("CMake tiefer") << '\n';
    std::cout << "Dieses Beispiel zeigt ein kleines CMake-Projekt mit Bibliothek und Executable.\n";
    return 0;
}
