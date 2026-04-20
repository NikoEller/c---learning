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

    return 0;
}
