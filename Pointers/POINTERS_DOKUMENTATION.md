# C++ Pointer Dokumentation

## 1. Was ist ein Pointer?

Ein Pointer ist eine Variable, die **nicht direkt einen Wert**, sondern die **Adresse einer anderen Variable im Speicher** speichert.

Beispiel:

```cpp
int number = 42;
int* ptr = &number;
```

- `number` speichert den Wert `42`
- `&number` bedeutet: "Adresse von `number`"
- `ptr` speichert also die Speicheradresse von `number`
- `int*` bedeutet: `ptr` ist ein Pointer auf einen `int`

## 2. Die zwei wichtigsten Operatoren

### `&` Adressoperator

Liefert die Speicheradresse einer Variable.

```cpp
int x = 10;
std::cout << &x << std::endl;
```

### `*` Dereferenzierungsoperator

Greift auf den Wert zu, auf den ein Pointer zeigt.

```cpp
int x = 10;
int* ptr = &x;

std::cout << *ptr << std::endl;  // Ausgabe: 10
```

Wichtig:

- Bei der **Deklaration** bedeutet `*`: "Das ist ein Pointer"
- Bei der **Benutzung** bedeutet `*`: "Hole den Wert an dieser Adresse"

## 3. Einfaches Grundbeispiel

```cpp
#include <iostream>

int main() {
    int age = 25;
    int* ptr = &age;

    std::cout << "Wert von age: " << age << std::endl;
    std::cout << "Adresse von age: " << &age << std::endl;
    std::cout << "Adresse im Pointer: " << ptr << std::endl;
    std::cout << "Wert ueber Pointer: " << *ptr << std::endl;

    return 0;
}
```

## 4. Wert ueber Pointer aendern

Mit einem Pointer kann man den Originalwert direkt veraendern.

```cpp
int number = 10;
int* ptr = &number;

*ptr = 50;

std::cout << number << std::endl;  // 50
```

Warum?

Weil `ptr` auf `number` zeigt. Wenn du `*ptr` aenderst, aenderst du den Wert an genau dieser Speicheradresse.

## 5. Pointer Schritt fuer Schritt lesen

```cpp
int value = 7;
int* p = &value;
```

So kannst du es lesen:

1. `value` ist eine normale `int`-Variable mit dem Wert `7`
2. `&value` ist die Adresse von `value`
3. `p` speichert diese Adresse
4. `*p` liefert wieder den Wert an dieser Adresse, also `7`

## 6. `nullptr`

Ein Pointer sollte auf nichts zeigen koennen. Dafuer verwendet man `nullptr`.

```cpp
int* ptr = nullptr;
```

Das ist wichtig, um ungueltige Pointer zu vermeiden.

```cpp
if (ptr != nullptr) {
    std::cout << *ptr << std::endl;
}
```

Merke:

- `nullptr` bedeutet: "zeigt auf kein gueltiges Objekt"
- Niemals `*ptr` ausfuehren, wenn `ptr == nullptr`

## 7. Pointer an Funktionen uebergeben

Mit Pointern kann eine Funktion den Originalwert veraendern.

```cpp
#include <iostream>

void changeValue(int* ptr) {
    *ptr = 99;
}

int main() {
    int x = 10;
    changeValue(&x);

    std::cout << x << std::endl;  // 99
    return 0;
}
```

Erklaerung:

- `changeValue(&x)` uebergibt die Adresse von `x`
- `ptr` zeigt innerhalb der Funktion auf `x`
- `*ptr = 99` aendert den echten Wert von `x`

## 8. Call by Value vs. Pointer

### Ohne Pointer

```cpp
void change(int x) {
    x = 50;
}
```

Hier wird nur eine Kopie veraendert.

### Mit Pointer

```cpp
void change(int* x) {
    *x = 50;
}
```

Hier wird das Original veraendert.

Aufruf:

```cpp
int number = 10;
change(&number);
```

## 9. Pointer und Arrays

Arrays und Pointer haengen in C++ sehr eng zusammen.

```cpp
int arr[3] = {1, 2, 3};
int* ptr = arr;
```

Warum funktioniert das?

Weil `arr` oft als Adresse des ersten Elements verwendet wird.

```cpp
std::cout << *ptr << std::endl;        // 1
std::cout << *(ptr + 1) << std::endl;  // 2
std::cout << *(ptr + 2) << std::endl;  // 3
```

Das ist dasselbe wie:

```cpp
std::cout << arr[0] << std::endl;
std::cout << arr[1] << std::endl;
std::cout << arr[2] << std::endl;
```

## 10. Pointer-Arithmetik

Wenn du bei einem Pointer `+1` machst, springt er **nicht um 1 Byte**, sondern um die Groesse des Datentyps weiter.

```cpp
int arr[3] = {10, 20, 30};
int* ptr = arr;

std::cout << *ptr << std::endl;        // 10
std::cout << *(ptr + 1) << std::endl;  // 20
```

Bei `int*` bedeutet `ptr + 1`: gehe zum naechsten `int`.

## 11. Pointer neu zuweisen

Ein Pointer kann spaeter auf eine andere Variable zeigen.

```cpp
int a = 5;
int b = 8;

int* ptr = &a;
std::cout << *ptr << std::endl;  // 5

ptr = &b;
std::cout << *ptr << std::endl;  // 8
```

## 12. Const mit Pointern

Das ist ein sehr haeufiges Verwirrungsthema.

### Pointer auf konstante Daten

```cpp
const int value = 100;
const int* ptr = &value;
```

Du darfst den Wert ueber `ptr` nicht aendern:

```cpp
// *ptr = 200;  // Fehler
```

Aber der Pointer selbst darf auf etwas anderes zeigen:

```cpp
int other = 50;
ptr = &other;
```

### Konstanter Pointer

```cpp
int value = 100;
int* const ptr = &value;
```

Jetzt darf der Pointer nicht auf eine andere Adresse zeigen:

```cpp
// ptr = &other;  // Fehler
```

Aber der Wert darf veraendert werden:

```cpp
*ptr = 200;
```

### Konstanter Pointer auf konstante Daten

```cpp
const int value = 100;
const int* const ptr = &value;
```

Dann darfst du weder die Adresse noch den Wert aendern.

## 13. Pointer und Referenzen

Pointer und Referenzen sind aehnlich, aber nicht gleich.

### Referenz

```cpp
int x = 10;
int& ref = x;
ref = 20;
```

### Pointer

```cpp
int x = 10;
int* ptr = &x;
*ptr = 20;
```

Unterschiede:

- Referenzen muessen sofort initialisiert werden
- Referenzen koennen spaeter nicht auf etwas anderes zeigen
- Pointer koennen `nullptr` sein
- Pointer koennen neu gesetzt werden
- Pointer brauchen oft mehr Vorsicht

## 14. Dynamischer Speicher mit `new` und `delete`

Pointer werden oft benutzt, um Speicher zur Laufzeit anzulegen.

```cpp
int* ptr = new int;
*ptr = 42;

std::cout << *ptr << std::endl;

delete ptr;
ptr = nullptr;
```

Oder mit Initialisierung:

```cpp
int* ptr = new int(99);
std::cout << *ptr << std::endl;
delete ptr;
```

Fuer Arrays:

```cpp
int* arr = new int[5];

arr[0] = 10;
arr[1] = 20;

delete[] arr;
arr = nullptr;
```

## 15. Warum `delete` wichtig ist

Wenn du `new` verwendest, musst du spaeter `delete` aufrufen, sonst entsteht ein **Memory Leak**.

Schlechtes Beispiel:

```cpp
int* ptr = new int(5);
// delete fehlt
```

Besser:

```cpp
int* ptr = new int(5);
delete ptr;
ptr = nullptr;
```

## 16. Haeufige Fehler

### 1. Uninitialisierten Pointer benutzen

```cpp
int* ptr;
// std::cout << *ptr << std::endl;  // Sehr gefaehrlich
```

Besser:

```cpp
int* ptr = nullptr;
```

### 2. `nullptr` dereferenzieren

```cpp
int* ptr = nullptr;
// std::cout << *ptr << std::endl;  // Fehler
```

### 3. Speicherleck

```cpp
int* ptr = new int(10);
// delete ptr; fehlt
```

### 4. Double Delete

```cpp
int* ptr = new int(10);
delete ptr;
// delete ptr;  // Fehler
```

Deshalb nach `delete` oft:

```cpp
ptr = nullptr;
```

### 5. Dangling Pointer

Ein Dangling Pointer zeigt auf Speicher, der nicht mehr gueltig ist.

```cpp
int* ptr = new int(10);
delete ptr;

// ptr zeigt jetzt auf ungueltigen Speicher
```

## 17. Moderne C++ Empfehlung

In modernem C++ sollte man `new` und `delete` moeglichst selten direkt verwenden. Stattdessen nutzt man lieber:

- `std::vector` fuer dynamische Arrays
- `std::string` fuer Texte
- `std::unique_ptr`
- `std::shared_ptr`

Beispiel mit `unique_ptr`:

```cpp
#include <iostream>
#include <memory>

int main() {
    std::unique_ptr<int> ptr = std::make_unique<int>(42);
    std::cout << *ptr << std::endl;
    return 0;
}
```

Vorteil:

- Kein manuelles `delete`
- Sicherer Speicherumgang

## 18. Wann du Pointer wirklich brauchst

Pointer sind besonders nuetzlich:

- bei dynamischem Speicher
- beim Arbeiten mit Arrays und Speicherbereichen
- bei Datenstrukturen wie Listen, Baeumen, Graphen
- bei Funktionen, die auf Originaldaten arbeiten sollen
- bei Low-Level- oder Systemprogrammierung

Im normalen modernen C++ ersetzt man Pointer aber oft durch:

- Referenzen
- `std::vector`
- `std::string`
- Smart Pointer

## 19. Komplettes Uebungsbeispiel

```cpp
#include <iostream>

void addTen(int* value) {
    if (value != nullptr) {
        *value += 10;
    }
}

int main() {
    int number = 5;
    int* ptr = &number;

    std::cout << "Vorher: " << number << std::endl;
    addTen(ptr);
    std::cout << "Nachher: " << number << std::endl;

    int arr[3] = {4, 8, 12};
    int* arrPtr = arr;

    for (int i = 0; i < 3; i++) {
        std::cout << *(arrPtr + i) << std::endl;
    }

    return 0;
}
```

## 20. Merksaetze

- Ein Pointer speichert eine Adresse.
- `&variable` liefert eine Adresse.
- `*pointer` liefert den Wert an dieser Adresse.
- Mit Pointern kannst du Originaldaten veraendern.
- `nullptr` ist sicherer als ein uninitialisierter Pointer.
- `new` braucht spaeter `delete`.
- In modernem C++ sind Smart Pointer oft die bessere Wahl.

## 21. Lernstrategie gegen Pointer-Probleme

Wenn Pointer fuer dich verwirrend sind, geh immer in dieser Reihenfolge:

1. Was ist die normale Variable?
2. Welche Adresse hat sie?
3. Welcher Pointer speichert diese Adresse?
4. Was liefert `*pointer`?
5. Wird gerade die Adresse geaendert oder der Wert?

Diese Denkweise hilft enorm.

## 22. Mini-Uebungen

### Uebung 1

Was wird ausgegeben?

```cpp
int x = 5;
int* p = &x;
*p = 12;
std::cout << x << std::endl;
```

Antwort: `12`

### Uebung 2

Was wird ausgegeben?

```cpp
int a = 3;
int b = 7;
int* p = &a;
p = &b;
std::cout << *p << std::endl;
```

Antwort: `7`

### Uebung 3

Was ist der Fehler?

```cpp
int* p = nullptr;
std::cout << *p << std::endl;
```

Antwort: `p` zeigt auf kein gueltiges Objekt.

## 23. Bezug zu deiner Datei

In [pointers.cpp](/Users/nikoeller/Documents/Programmieren/c++%20learning/Pointers/pointers.cpp) findest du ein direkt ausfuehrbares Beispiel zu:

- Adresse und Wert
- Dereferenzierung
- Aendern ueber Pointer
- Pointer in Funktionen
- Pointer und Arrays
- Pointer neu setzen
- `nullptr` sicher pruefen
