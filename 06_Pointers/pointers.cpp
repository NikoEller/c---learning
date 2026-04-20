#include <iostream>

// Aendert den Wert einer Variable ueber ihre Adresse.
void changeValue(int* ptr) {
    if (ptr != nullptr) {
        *ptr = 99;
    }
}

// Gibt ein Array ueber einen Pointer auf das erste Element aus.
void printArray(const int* arr, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << ' ';
    }
    std::cout << '\n';
}

// Diese Funktion zeigt den Unterschied zwischen Pointer neu setzen
// und Wert hinter dem Pointer aendern.
void redirectPointer(int*& ptr, int& newTarget) {
    ptr = &newTarget;
}

// Ein Pointer kann auch gelesen werden, ohne dass der Wert veraendert wird.
int readValue(const int* ptr) {
    if (ptr == nullptr) {
        return -1;
    }
    return *ptr;
}

int main() {
    std::cout << "=== 1. Grundidee eines Pointers ===\n";

    // number ist eine normale int-Variable im Speicher.
    int number = 42;

    // pointerToNumber speichert nicht den Wert 42,
    // sondern die Speicheradresse von number.
    int* pointerToNumber = &number;

    std::cout << "Wert von number: " << number << '\n';
    std::cout << "Adresse von number: " << &number << '\n';
    std::cout << "Im Pointer gespeicherte Adresse: " << pointerToNumber << '\n';
    std::cout << "Wert ueber den Pointer (*pointerToNumber): " << *pointerToNumber << "\n\n";

    std::cout << "=== 2. Wert ueber einen Pointer veraendern ===\n";

    // Durch Dereferenzierung greifen wir auf den echten Wert zu,
    // der an der Adresse gespeichert ist.
    *pointerToNumber = 77;

    std::cout << "Neuer Wert von number nach *pointerToNumber = 77: " << number << "\n\n";

    std::cout << "=== 3. Pointer an Funktionen uebergeben ===\n";

    // &number uebergibt die Adresse von number an die Funktion.
    changeValue(&number);

    std::cout << "Wert nach changeValue(&number): " << number << "\n\n";

    std::cout << "=== 4. nullptr sicher verwenden ===\n";

    // nullptr bedeutet: Der Pointer zeigt auf kein gueltiges Objekt.
    int* nullPointer = nullptr;

    if (nullPointer == nullptr) {
        std::cout << "nullPointer zeigt auf nichts. Vor dem Dereferenzieren immer pruefen.\n\n";
    }

    std::cout << "=== 5. Pointer und Arrays ===\n";

    // Der Name eines Arrays kann oft wie ein Pointer auf das erste Element
    // verwendet werden.
    int values[4] = {10, 20, 30, 40};
    int* arrayPointer = values;

    std::cout << "Erstes Array-Element ueber *arrayPointer: " << *arrayPointer << '\n';
    std::cout << "Zweites Array-Element ueber *(arrayPointer + 1): " << *(arrayPointer + 1) << '\n';
    std::cout << "Drittes Array-Element ueber arrayPointer[2]: " << arrayPointer[2] << '\n';
    std::cout << "Gesamtes Array: ";
    printArray(values, 4);
    std::cout << '\n';

    std::cout << "=== 6. Pointer-Arithmetik verstehen ===\n";

    // +1 bedeutet bei einem int* nicht +1 Byte, sondern
    // ein Element weiter zum naechsten int.
    std::cout << "Adresse von values[0]: " << &values[0] << '\n';
    std::cout << "Adresse von values[1]: " << &values[1] << '\n';
    std::cout << "arrayPointer + 1     : " << (arrayPointer + 1) << "\n\n";

    std::cout << "=== 7. Pointer auf andere Variablen umbiegen ===\n";

    int a = 5;
    int b = 12;
    int* ptr = &a;

    std::cout << "ptr zeigt zuerst auf a, also ist *ptr = " << *ptr << '\n';

    // Jetzt speichern wir eine andere Adresse im Pointer.
    ptr = &b;

    std::cout << "Nach ptr = &b zeigt ptr auf b, also ist *ptr = " << *ptr << "\n\n";

    std::cout << "=== 8. Adresse aendern vs. Wert aendern ===\n";

    int first = 100;
    int second = 200;
    int* movablePointer = &first;

    std::cout << "Startwert ueber movablePointer: " << *movablePointer << '\n';

    // Hier aendern wir den Wert hinter dem Pointer.
    *movablePointer = 150;
    std::cout << "Nach *movablePointer = 150 ist first = " << first << '\n';

    // Hier aendern wir nicht den Wert, sondern das Ziel des Pointers.
    redirectPointer(movablePointer, second);
    std::cout << "Nach redirectPointer zeigt movablePointer auf second: " << *movablePointer << "\n\n";

    std::cout << "=== 9. const int* lesen, aber nicht veraendern ===\n";

    const int fixedValue = 500;
    const int* pointerToConst = &fixedValue;

    // Ueber einen Pointer auf const darf man lesen,
    // aber nicht schreiben.
    std::cout << "Gelesener const-Wert: " << readValue(pointerToConst) << "\n\n";

    std::cout << "=== 10. Mehrere Pointer auf dieselbe Variable ===\n";

    int shared = 33;
    int* p1 = &shared;
    int* p2 = &shared;

    std::cout << "Vorher: shared = " << shared << '\n';

    // Beide Pointer zeigen auf dieselbe Speicherstelle.
    *p1 = 44;

    std::cout << "Nach *p1 = 44: shared = " << shared << '\n';
    std::cout << "Lesen ueber p2 ergibt ebenfalls: " << *p2 << "\n\n";

    std::cout << "=== 11. Haeufige Denkfalle ===\n";

    int x = 7;
    int* px = &x;

    std::cout << "px speichert eine Adresse: " << px << '\n';
    std::cout << "*px ist der Wert an dieser Adresse: " << *px << '\n';

    // Viele Anfaenger verwechseln diese beiden Ebenen:
    // px  -> Adresse
    // *px -> Wert an dieser Adresse
    *px = 88;

    std::cout << "Nach *px = 88 ist x = " << x << "\n\n";

    std::cout << "=== 12. Zusammenfassung ===\n";
    std::cout << "Ein Pointer speichert eine Adresse.\n";
    std::cout << "&variable liefert die Adresse einer Variable.\n";
    std::cout << "*pointer liefert den Wert an dieser Adresse.\n";
    std::cout << "Mit Pointern kann man Originaldaten direkt veraendern.\n";
    std::cout << "Vor dem Dereferenzieren eines optionalen Pointers immer nullptr pruefen.\n";

    return 0;
}
