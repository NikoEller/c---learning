#include <iostream>

int main() {
    std::cout << "Copy erzeugt in der Regel ein neues unabhaengiges Objekt.\n";
    std::cout << "Move uebernimmt vorhandene Ressourcen und vermeidet unnoetige Kopien.\n";
    std::cout << "Bei rohem Speicher muss man sauber regeln, wer ihn freigibt.\n";
    return 0;
}
