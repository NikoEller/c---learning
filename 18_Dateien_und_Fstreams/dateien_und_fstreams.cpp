#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ofstream outFile("example_output.txt");
    if (!outFile) {
        std::cout << "Datei konnte nicht zum Schreiben geoeffnet werden.\n";
        return 1;
    }

    outFile << "Erste Zeile\n";
    outFile << "Zweite Zeile\n";
    outFile.close();

    std::ifstream inFile("example_output.txt");
    if (!inFile) {
        std::cout << "Datei konnte nicht zum Lesen geoeffnet werden.\n";
        return 1;
    }

    std::cout << "=== Dateiinhalt ===\n";
    std::string line;
    while (std::getline(inFile, line)) {
        std::cout << line << '\n';
    }

    return 0;
}
