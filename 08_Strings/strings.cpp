#include <iostream>
#include <string>

int main() {
    std::string firstName = "Niko";
    std::string lastName = "Eller";

    // Verkettung von zwei Strings.
    std::string fullName = firstName + " " + lastName;

    std::cout << "Voller Name: " << fullName << '\n';
    std::cout << "Laenge: " << fullName.size() << '\n';

    // Zugriff auf einzelne Zeichen.
    std::cout << "Erster Buchstabe: " << fullName[0] << '\n';

    // Vergleich von Strings.
    std::cout << std::boolalpha;
    std::cout << "Ist der Name gleich 'Niko Eller'? " << (fullName == "Niko Eller") << '\n';

    // Teilstring bilden.
    std::string firstWord = fullName.substr(0, 4);
    std::cout << "Erstes Wort per substr: " << firstWord << '\n';

    // Text durchsuchen.
    std::size_t position = fullName.find("Eller");
    if (position != std::string::npos) {
        std::cout << "'Eller' gefunden an Position: " << position << '\n';
    }

    // Zeichen einzeln durchlaufen.
    std::cout << "Buchstaben im Vornamen: ";
    for (char letter : firstName) {
        std::cout << letter << ' ';
    }
    std::cout << '\n';

    return 0;
}
