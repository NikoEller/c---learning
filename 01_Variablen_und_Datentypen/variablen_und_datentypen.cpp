#include <iostream>
#include <string>

int main() {
    // Eine ganze Zahl fuer das Alter.
    int age = 21;

    // Eine Kommazahl fuer die Koerpergroesse.
    double height = 1.82;

    // Ein einzelnes Zeichen.
    char grade = 'A';

    // Ein Wahrheitswert.
    bool isStudent = true;

    // Ein Text.
    std::string name = "Niko";

    std::cout << "=== Variablen und Datentypen ===\n";
    std::cout << "Name: " << name << '\n';
    std::cout << "Alter: " << age << '\n';
    std::cout << "Groesse: " << height << '\n';
    std::cout << "Note: " << grade << '\n';
    std::cout << "Student: " << std::boolalpha << isStudent << "\n\n";

    // Unterschied zwischen int und double.
    int wholeNumber = 7;
    double decimalNumber = 7.5;

    std::cout << "int speichert: " << wholeNumber << '\n';
    std::cout << "double speichert: " << decimalNumber << '\n';

    return 0;
}
