# Strings

## Was ist ein String?

Ein `std::string` ist der Standardtyp fuer Text in modernem C++.

```cpp
std::string name = "Niko";
```

## Warum ist `std::string` wichtig?

Fast jedes Programm arbeitet irgendwann mit Text:

- Namen
- Benutzereingaben
- Dateiinhalten
- Meldungen und Ausgaben

Darum gehoert `std::string` zu den wichtigsten Standardtypen.

## Hauefige Operationen

- Texte zusammenhaengen mit `+`
- Laenge abfragen mit `.size()`
- vergleichen mit `==`
- einzelne Zeichen ueber Indizes lesen
- Teilstrings bilden mit `.substr(...)`
- Text durchsuchen mit `.find(...)`

## Einfaches Beispiel

```cpp
std::string firstName = "Niko";
std::string lastName = "Eller";
std::string fullName = firstName + " " + lastName;
```

## `char` gegen `std::string`

- `char` ist ein einzelnes Zeichen
- `std::string` ist eine ganze Zeichenkette

Beispiel:

- `'A'` ist ein `char`
- `"Alex"` ist Text und passt zu `std::string`

## Typische Situationen

- Namen speichern
- Eingaben vergleichen
- Meldungen zusammensetzen
- nach Woertern oder Zeichen suchen

## Typische Fehler

- `char` und `std::string` verwechseln
- vergessen, `#include <string>` einzubinden
- glauben, dass `fullName[0]` ein String ist, obwohl es nur ein einzelnes Zeichen ist

## Merksatz

Fuer normalen Text in modernem C++ benutzt man fast immer `std::string`.
