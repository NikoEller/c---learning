#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::cout << "=== Schreiben in eine Datei ===\n";

    std::ofstream outFile("example_output.txt");
    if (!outFile) {
        std::cout << "Datei konnte nicht zum Schreiben geoeffnet werden.\n";
        return 1;
    }

    outFile << "Erste Zeile\n";
    outFile << "Zweite Zeile\n";
    outFile << "Dritte Zeile\n";
    outFile.close();

    std::cout << "Datei wurde erfolgreich geschrieben.\n\n";

    std::cout << "=== Lesen aus einer Datei ===\n";

    std::ifstream inFile("example_output.txt");
    if (!inFile) {
        std::cout << "Datei konnte nicht zum Lesen geoeffnet werden.\n";
        return 1;
    }

    std::string line;
    int lineNumber = 1;
    while (std::getline(inFile, line)) {
        std::cout << "Zeile " << lineNumber << ": " << line << '\n';
        lineNumber++;
    }
    inFile.close();

    std::cout << "\n=== Anhaengen an eine Datei ===\n";

    std::ofstream appendFile("example_output.txt", std::ios::app);
    if (!appendFile) {
        std::cout << "Datei konnte nicht zum Anhaengen geoeffnet werden.\n";
        return 1;
    }

    appendFile << "Vierte Zeile (angehaengt)\n";
    appendFile.close();

    std::cout << "Neue Zeile wurde an die Datei angehaengt.\n";
    return 0;
}
