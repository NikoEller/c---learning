# Strings

## Was ist ein String?

Ein `std::string` ist ein Datentyp fuer Text.

```cpp
std::string name = "Niko";
```

## Hauefige Operationen

- Texte zusammenhaengen mit `+`
- Laenge abfragen mit `.size()`
- vergleichen mit `==`
- einzelne Zeichen ueber Indizes lesen

## Beispiel

```cpp
std::string firstName = "Niko";
std::string lastName = "Eller";
std::string fullName = firstName + " " + lastName;
```

## Warum nicht `char`?

- `char` ist nur ein einzelnes Zeichen
- `std::string` ist eine ganze Zeichenkette

## Typische Fehler

- `char` und `std::string` verwechseln
- vergessen, `#include <string>` einzubinden

## Merksatz

Fuer normalen Text in modernem C++ benutzt man fast immer `std::string`.
