#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream out("notes.txt");
    out << "C++ Dateien lernen\n";
    out.close();

    std::ifstream in("notes.txt");
    std::string line;
    while (std::getline(in, line)) {
        std::cout << line << '\n';
    }

    return 0;
}
