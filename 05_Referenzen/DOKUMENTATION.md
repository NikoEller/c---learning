# Referenzen

## Was ist eine Referenz?

Eine Referenz ist ein zweiter Name fuer eine bestehende Variable.

```cpp
int x = 10;
int& ref = x;
```

`ref` ist hier keine neue eigene Variable mit eigenem Wert, sondern ein Alias
fuer `x`.

## Warum sind Referenzen wichtig?

Referenzen gehoeren zu den Grundlagen von C++, weil sie an vielen Stellen
vorkommen:

- bei Funktionsparametern
- bei Rueckgabewerten
- bei `const`-Referenzen
- spaeter auch bei OOP, STL und Templates

Gerade fuer Anfaenger sind Referenzen oft einfacher als Pointer.

## Wichtige Eigenschaften

- Referenzen muessen sofort initialisiert werden
- sie koennen spaeter nicht auf ein anderes Objekt umgebogen werden
- sie sind oft einfacher und sicherer als Pointer

## Referenz gegen normale Kopie

Wenn du einen Wert per Wert uebergibst, entsteht eine Kopie.

Wenn du per Referenz uebergibst, arbeitet die Funktion mit dem Originalobjekt.

```cpp
void addTen(int& value) {
    value += 10;
}
```

Hier wird der uebergebene Wert direkt veraendert.

## `const`-Referenzen

Sehr haeufig sieht man auch:

```cpp
void printValue(const int& value) {
    std::cout << value;
}
```

Das bedeutet:

- keine Kopie noetig
- der Wert darf in der Funktion nicht geaendert werden

Das ist besonders praktisch bei grossen Objekten wie `std::string` oder
`std::vector`.

## Typische Einsatzfaelle

- Werte in Funktionen aendern
- grosse Objekte ohne Kopie lesen
- mehrere Namen fuer dasselbe Objekt verwenden

## Typische Fehler

- glauben, dass eine Referenz spaeter auf eine andere Variable gesetzt werden kann
- Referenzen und Pointer gedanklich vermischen
- vergessen, dass eine Referenz auf das Originalobjekt wirkt

## Merksatz

Eine Referenz ist wie ein zweiter Name fuer dasselbe Objekt.
