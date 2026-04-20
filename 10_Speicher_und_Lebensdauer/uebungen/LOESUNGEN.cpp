#include <iostream>

int main() {
    std::cout << "Lokale Variablen verschwinden nach ihrem Geltungsbereich.\n";
    std::cout << "Ein Pointer darauf waere danach ungueltig.\n";
    std::cout << "Dynamischer Speicher lebt, bis er freigegeben wird.\n";
    return 0;
}
