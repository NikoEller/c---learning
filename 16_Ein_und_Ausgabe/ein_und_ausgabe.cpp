#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string name = "Niko";
    int age = 21;

    std::cout << "=== Ausgabe ===\n";
    std::cout << "Name: " << name << '\n';
    std::cout << "Alter: " << age << "\n\n";

    // Interaktive Eingabe ist hier nur als Beispiel vorbereitet.
    // Du kannst die Kommentare entfernen und das Programm selbst testen.
    //
    // std::string inputName;
    // std::cout << "Wie heisst du? ";
    // std::getline(std::cin, inputName);
    // std::cout << "Hallo, " << inputName << "!\n";

    // Mit einem Stringstream kann man Eingabe ohne echte Benutzereingabe zeigen.
    std::istringstream simulatedInput("42 Berlin");
    int luckyNumber = 0;
    std::string city;
    simulatedInput >> luckyNumber >> city;

    std::cout << "Simulierte Eingabe:\n";
    std::cout << "Glueckszahl: " << luckyNumber << '\n';
    std::cout << "Stadt: " << city << '\n';

    std::cout << "Das Beispiel zeigt die Grundidee von Ein- und Ausgabe.\n";
    return 0;
}
