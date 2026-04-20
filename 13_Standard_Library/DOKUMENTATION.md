# Standard Library

## Was ist die Standard Library?

Die C++ Standard Library ist eine Sammlung fertiger Werkzeuge, die du direkt
benutzen kannst.

Sie enthaelt zum Beispiel:

- Container wie `std::vector` und `std::array`
- Strings mit `std::string`
- Algorithmen wie `std::sort`
- Hilfstypen wie `std::pair`

## Warum ist sie wichtig?

- spart viel eigene Arbeit
- ist getestet und standardisiert
- oft sicherer als selbst gebaute Low-Level-Loesungen
- gehoert in modernen C++-Projekten zum Alltag

## Typische Bausteine

- Container fuer Datensammlungen
- Strings fuer Text
- Algorithmen fuer Suchen, Sortieren und Umformen
- Utility-Typen fuer kleine Hilfsaufgaben

## Hauefige Beispiele

```cpp
std::vector<int> values;
std::array<int, 3> arr = {1, 2, 3};
std::pair<std::string, int> player = {"Alex", 10};
```

## Wichtige Denkweise

Viele Dinge, die Anfaenger zuerst selbst bauen wollen, gibt es bereits in der
Standard Library:

- dynamische Arrays
- Strings
- Sortierfunktionen
- Schluessel-Wert-Paare

Darum lohnt sich fast immer zuerst der Blick in die STL.

## Merksatz

Bevor du etwas selbst baust, lohnt sich fast immer ein Blick in die Standard Library.
