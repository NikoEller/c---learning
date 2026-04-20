# Ein- und Ausgabe

## Wozu braucht man das?

Programme muessen oft mit der Aussenwelt kommunizieren.

Das passiert ueber:

- Ausgabe mit `std::cout`
- Eingabe mit `std::cin`
- ganze Zeilen mit `std::getline`

## Beispiele

```cpp
std::cout << "Hallo" << std::endl;
```

```cpp
int age;
std::cin >> age;
```

```cpp
std::string name;
std::getline(std::cin, name);
```

## Typische Fehler

- `std::cin` und `std::getline` mischen, ohne auf das Zeilenende zu achten
- vergessen, `#include <iostream>` oder `#include <string>` einzubinden

## Merksatz

`std::cout` schreibt, `std::cin` liest, `std::getline` liest ganze Zeilen.
