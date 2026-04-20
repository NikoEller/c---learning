# Ein- und Ausgabe

## Wozu braucht man das?

Programme muessen oft mit der Aussenwelt kommunizieren.

Das passiert ueber:

- Ausgabe mit `std::cout`
- Eingabe mit `std::cin`
- ganze Zeilen mit `std::getline`

## Typische Ausgaben

```cpp
std::cout << "Hallo" << std::endl;
```

Damit schreibst du Text in die Konsole.

## Typische Eingaben

```cpp
int age;
std::cin >> age;
```

Damit liest du einzelne Werte ein.

```cpp
std::string name;
std::getline(std::cin, name);
```

Damit liest du eine ganze Zeile inklusive Leerzeichen.

## Wichtiger Unterschied

- `std::cin` liest oft nur bis zum naechsten Leerzeichen
- `std::getline` liest eine ganze Zeile

## Typische Fehler

- `std::cin` und `std::getline` mischen, ohne auf das Zeilenende zu achten
- vergessen, `#include <iostream>` oder `#include <string>` einzubinden
- erwarten, dass `std::cin >> name` auch Leerzeichen mitliest

## Merksatz

`std::cout` schreibt, `std::cin` liest Werte, `std::getline` liest ganze Zeilen.
